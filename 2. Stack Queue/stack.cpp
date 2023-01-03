#include <iostream>
#include <stack>

using namespace std ;
//3, 4, 5 (가장 먼저 들어온 것 - 3, 가장 늦게 나가는 것 - 3)

int main(void){
    ios :: sync_with_stdio(false) ; cin.tie(0);

    stack<int> s;//앞이 막혀있고, 뒤가 열려있음 

    s.push(3) ;
    s.push(4) ;
    s.push(5) ;

    while(!s.empty()){
        int k=s.top();
        cout << k << '\n';
        s.pop();
    }

    return 0;
}