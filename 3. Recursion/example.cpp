/*
4 5 1
1 2
1 3
1 4
2 4
3 4

DFS-- 깊이 끝까지 들어가는 것 
*/

#include <iostream>
#include <vector>
using namespace std;

int N,M,V;
vector <int > graph[10001];
bool visited[10001];

void DFS(int start){
    if (visited[start]) return;

    visited[start] = true;
    cout << start << ' ';

    for (int i=0;i<graph[start].size();i++){
        int next_node=graph[start][i] ;
        if (! visited[next_node]) {
            DFS(next_node);
        }
    }
}

int main(void){
    ios:: sync_with_stdio(false); cin.tie(0);

    cin >> N >> M >> V;

    for (int i=0,a,b;i<N;i++){
        cin >> a >> b;
        graph[a].push_back(b); //양방향 연결
        graph[b].push_back(a); 
    }

    DFS(V);

    return 0;
}

//Backtrack: 어떤 값을 두고 끝까지 감-> 틀림 -> 뒤로 감