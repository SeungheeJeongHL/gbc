#include <iostream>
#include <queue>
#include <string.h>

using namespace std;



int main(void) {
    ios:: sync_with_stdio(false); cin.tie(0);

    int array[10];


    queue<int> Q; //앞이 열려있음
    queue< pair<int, int> > QP;



    Q.push(3);
    Q.push(4);
    Q.push(5);

    memset(array,0,sizeof(array)) ; //0으로만 초기화 가능-초기화 훨신 빠름
    //fill();

    QP.push (make_pair(3,4));
    //OP.push({3,4});

    //OP.push({{1,2}, {3,4}});
    //OP.front().first.first - 1
    //OP.front().first.second -2
    //OP.front().second.first -3
    //OP.front().second.second -4

    while(!Q.empty()){
        int k=Q.front();//GHOST k=OP.front();
        cout << k << '\n';
        Q.pop();
    }

    return 0;



}