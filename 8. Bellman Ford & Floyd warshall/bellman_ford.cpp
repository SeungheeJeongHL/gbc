#include <iostream> 
#include <limits.h>
#include <vector> 
#define MAX 501
#define INF INT_MAX

typedef long long ll ; 

using namespace std; 

int N, M ; 
int A, B, C; 

vector <pair <int ,int >  > V[MAX];
vector<pair<pair<int, int>, int> > graph ;
ll DIST[MAX] ; 

// O( V * E )
void bellmanFord(int start) { 
    for (int i = 1; i <= N; i++) DIST[i] = INF ; 

    DIST[start] = 0 ; // DIST[1] = 0 ; 

    for (int i = 1 ; i <= N - 1 ; i++) { 
        for (int j = 0 ; j < graph.size(); j++) { 
            ll src = graph[j].first.first ; 
            ll dest = graph[j].first.second ;  
            ll weight = graph[j].second ;   
            if ( DIST[src] != INF && DIST[dest] > DIST[src] + weight ) { 
                DIST[dest] = DIST[src] + weight ;  
            }
        }
    }
}

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0) ; 

    cin >> N >> M ; // N - vertex (정점) , M - edge

    for (int i = 0 ; i < M ; i++) { 
        cin >> A >> B >> C ; 
        graph.push_back({{A, B}, C}) ; 
    }

    bellmanFord(1) ; 

    for (int i = 1; i <= N ; i++) { 
        if ( DIST[i] == INF ) { 
            cout << "INF" << ' '; 
        } else { 
            cout << DIST[i] << ' '; 
        } 
    }

    return 0 ;
}