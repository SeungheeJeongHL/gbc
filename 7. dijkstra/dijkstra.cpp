#include <iostream>
#include <vector>
#include <queue>
#define INF 1e9

/*
5 6
1
5 1 1
1 2 2
1 3 3
2 3 4
2 4 5
3 4 6
*/

using namespace std ;

int V, E, start; 
int DIST[30010];
vector <pair <int, int > > graph[30010] ;

void dijkstra(){
    for (int i = 1 ; i<= V ; i++){
        DIST[i]=INF;
    }
    priority_queue <pair <int, int > > pq;
    pq.push({0, start});
    DIST[start] = 0 ;

    while (!pq.empty()) {
        int curr_weight = -pq.top().first ;
        int curr_node = pq.top().second ;

        pq.pop();

        for (int i = 0 ; i <graph[curr_node].size() ; i++){
            int next_node = graph[curr_node][i].first;
            int next_weight = graph[curr_node][i].second ;

            if (DIST[next_node] > curr_weight + next_weight){
                DIST[next_node] = curr_weight + next_weight;
                pq.push({-DIST[next_node], next_node});
            }
        }
    }
    for (int i = 1 ; i <= V; i++){
        if (DIST[i] == INF) cout << "INF" << '\n';
        else cout << DIST[i] << '\n';
    }
    cout << '\n';
}
int main(void){
    ios::sync_with_stdio(false);cin.tie(0);
    cin >> V >> E ;
    cin >> start ; 
    for (int i = 0, a,b,c; i < E ; i++){
        cin >> a >> b >> c ;
        graph[a].push_back({b,c});

    }
    dijkstra();
    return 0;
}