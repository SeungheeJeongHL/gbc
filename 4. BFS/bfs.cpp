#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N,M,V;
vector <int> graph[10001];//2차원 배열
bool visited[10001];

void BFS(int start){
    queue <int> Q;
    Q.push(start);
    visited[start]=true;

    while(!Q.empty()){
        int curr = Q.front();
        Q.pop();

        cout << curr << ' ';

        for (int i=0;i<graph[curr].size();i++){
            int next = graph[curr][i];
            if (!visited[next]){
                visited[next]=true;
                Q.push(next);
            }
        }
    }
    cout << '\n';
}


int main(void){
    ios:: sync_with_stdio(false); cin.tie(0);

    cin >> N >> M >> V;

    for (int i=0,a,b;i<M;i++){
        cin >> a >> b;
        graph[a].push_back(b); //양방향 연결
        graph[b].push_back(a); 
    }

    BFS(V);

    return 0;
}

//Backtrack: 어떤 값을 두고 끝까지 감-> 틀림 -> 뒤로 감