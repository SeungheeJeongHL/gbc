#include <iostream>
#include <queue>
#include <string.h>

using namespace std;



int main(void) {
    ios:: sync_with_stdio(false); cin.tie(0);

    int array[10];


    queue<int> O; //앞이 열려있음
    queue< pair<int, int> > OP;



    O.push(3);
    O.push(4);
    O.push(5);

    memset(array,0,sizeof(array)) ; //0으로만 초기화 가능-초기화 훨신 빠름
    //fill();

    OP.push (make_pair(3,4));
    //OP.push({3,4});

    //OP.push({{1,2}, {3,4}});
    //OP.front().first.first - 1
    //OP.front().first.second -2
    //OP.front().second.first -3
    //OP.front().second.second -4

    while(!O.empty()){
        int k=O.front();//GHOST k=OP.front();
        cout << k << '\n';
        O.pop();
    }

    return 0;



}