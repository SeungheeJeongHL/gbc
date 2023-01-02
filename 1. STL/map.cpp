# include <iostream>
# include <map>

using namespace std ;

int main (void) {
    ios::sync_with_stdio(false); // 입력을 빠르게 하기 위해(속도차이 남)
    cin.tie(0) ; //입력 속도 위함 2

    map<int,int>m;

    m.insert(make_pair(2,3)) ;
    m.insert(make_pair(1,5)) ;
    m.insert(make_pair(8,1)) ;

    m[3]=5;


    for (auto iter = m.begin() ;iter != m.end() ;iter++){
        cout << iter ->first << ' ' << iter->second << '\n'; // first: key, second:value
    }

    return 0;
}