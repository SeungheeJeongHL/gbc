##### 알고리즘 Day4

## BFS

- BFS란
  - BFS(Breadth-First Search, 너비 우선 탐색)는 그래프에서 인접한 시작 노드에 인접한 노드부터 탐색하는 알고리즘이다. BFS는 최단거리를 구하거나, 미로 문제를 풀 때, 많이 사용된다. 

  ![](BFS.png)
  https://heytech.tistory.com/56
- BFS 구현 코드
```cpp
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N,M,V;
vector <int> graph[10001];
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
```
DFS와 차이점 - 노드의 방문 순서! 
* Queue에 입력된 후에야 진짜 노드 방문!