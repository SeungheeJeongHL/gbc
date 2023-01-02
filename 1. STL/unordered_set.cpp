#include<iostream>
#include<unordered_set>

using namespace std;

//sort+Only one
int main(void){
    ios::sync_with_stdio(false); cin.tie(0);

    unordered_set <int> s;

    s.insert(3);
    s.insert(1) ;
    s.insert(6);

    s.insert(1);

    unordered_set<int>::iterator iter;

    for (iter =s.begin() ; iter !=s.end();iter++){
        cout << *iter << ' ';
    }

    cout << '\n';
    return 0;

}