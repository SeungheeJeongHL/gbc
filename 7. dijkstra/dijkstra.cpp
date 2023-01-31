#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#define INF INT_MAX

// 백준 1753 문제 
/*
5 6
1
start end weight
5     1   1
1     2   2
1     3   3
2     3   4
2     4   5
3     4   6
*/

using namespace std ;

int V, E, start; 
int DIST[20010];
vector <pair <int, int > > graph[20010] ;

void dijkstra(){
    //Distance 무한대 값
    for (int i = 1 ; i<= V ; i++){
        DIST[i]=INF; // 다 못가는 상태로 초기화
    }
    priority_queue <pair <int, int > > pq;
    //priority_queue <pair <pair <int, int>, vector <int, int > > , greater <pair <int, int > > > ppq ; -> 이걸 사용하면 아래에서 -를 사용하지 않아도 됨. but, 시간 오래 걸림
    pq.push({0, start}); // weight , curr_node
    DIST[start] = 0 ;

    // pq <0, start>
    while (!pq.empty()) {
        int curr_weight = -pq.top().first ; //0
        int curr_node = pq.top().second ; // start

        pq.pop();
        //pq: empty

        for (int i = 0 ; i <graph[curr_node].size() ; i++){
            int next_node = graph[curr_node][i].first; // end 
            int next_weight = graph[curr_node][i].second ; // weight

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
        //start, end, weight
        graph[a].push_back({b,c});

    }
    // graph
    /*
        1 -> {2,2}(graph[1][0]) -> {3,3}(graph[1][1])
        2 -> {3,4} -> {4,5}
        3 -> {4,6} 
        4 -> 
        5 -> {4,1}
    */
   
    dijkstra();
    return 0;
}