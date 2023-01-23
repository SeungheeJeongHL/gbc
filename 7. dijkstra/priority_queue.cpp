#include <iostream> 
#include <queue> 

using namespace std ;

int main(void){
    ios::sync_with_stdio(false); cin.tie(0);
    priority_queue <int> pq ; // 내림차순
    priority_queue <int, vector<int>, greater<int> > pq_small; // 오름 차순
    
    pq.push(40);
    pq.push(20);
    pq.push(70);
    pq.push(60);
    pq.push(50);

    while (!pq.empty()){
        int k = pq.top(); //pq에서는 front가 아닌 top 사용
        cout << k << ' ' ;
        pq.pop();

        pq_small.push(k);
    }
    cout << '\n';

    while (!pq_small.empty()){
        int k = pq_small.top();
        cout << k << ' ';
        pq_small.pop();

    }

    cout << '\n';
    return 0 ; 
}