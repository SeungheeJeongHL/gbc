# include <iostream>
# include <vector>

using namespace std ;

int main (void) {
    ios::sync_with_stdio(false); // 입력을 빠르게 하기 위해(속도차이 남)
    cin.tie(0) ; //입력 속도 위함 2

    vector<int> V;
    
    cout << "SIZE: " << V.size() << '\n' ;

    V.push_back(1); //push
    V.push_back(2);
    V.push_back(0);

    //시간복잡도: O(N)
    for (int i=0;i<V.size();i++){
        cout << V[i] << ' ';

    }
    cout << '\n' ;

    V.pop_back(); //remove the zero 

    //1 2
    //V(0) V(1)

    vector<int>::iterator iter ;
    for (iter=V.begin();iter !=V.end();iter++){
        cout << *iter << ' ';
    }

    cout << '\n' ;

    return 0;
}
