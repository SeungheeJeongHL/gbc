##### 알고리즘 DAY 8

## bellman Ford 
 - bellman ford란
   - 한 노드에서 다른 노드까지의 최단 거리를 구하는 알고리즘이다. 
   - 간선의 가중치가 음수일 때도 최단 거리르 구할 수 있다.
   - 방문하지 않은 않은 노드 중에서 최단 거리가 가장 가까운 노드만을 반복하는 다익스트라와는 달리, 벨만 포드는 매 반복마다 모든 간선을 확인한다.  

## floyd warshall
 - floyd warshall이란 
   - 모든 vertex를 시작점으로 
   - 중간다리가 되는 노드를 거치는 경로와 바로 가는 경로를 비교하여 최단 경로를 알아내는 것이 핵심이다. (floyd_warshall.cpp 코드에서 k가 중간다리 )
 - dijkstra와 floyd warshall 의 time complexity 비교
   - Dijkstra =>  O ( V * ( ( V + E ) log V ) ) = O ( V* (2V + E ))
   - Floyd => O ( V ^ 3 )
   
   => 결국 전체적으로 보면 ( vertex가 어느정도 크고, edge가 너무 크지 않는 보통의 상황이면! )  Dijkstra가 빠를 것이다. 






** minimum spanning tree 알고리즘으로는 prim's 알고리즘과 kruskal 알고리즘이 있다