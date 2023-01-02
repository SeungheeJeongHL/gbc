#알고리즘 Day1

## STL (Standard Template Library)

#### 1) BASIC CPP
C++을 사용할 때 가장 기본이 되는 틀을 작성해보자면 다음과 같다.

```cpp
# include <iostream>


using namespace std ;

int main (void) {
    ios::sync_with_stdio(false); // 입력을 빠르게 하기 위해(속도차이 남)
    cin.tie(0) ; //입력 속도 위함 2

    int n;
    cin >> n; //scanf("%d",&n);

    cout << n << '\n' ; // printf("%d\n",n);

    return 0;
}
```

먼저, 제일 위에 쓰는 

```
#include <iostream>
```
은 Input/Output Stream이라는 의미이다.

C언어에서 코드 입력을 시작하면 #include <stdio.h>를 쓰고 시작하는 것과 비슷한 느낌인 것 같다.

두번째로, 
````
using namespace std
````

는  std라는 클래스에 정의되어 있는 함수들을 사용하기 위해 사용하는 코드이다.
이 코드를 적으면 범위 지정 연산자(::)의 사용을 줄일 수 있다.
(그런데 구글링해보니 using namespace std를 사용하지 말라는 내용도 많았음!)

그리고 메인함수 안을 한번 살펴보면! 가장 먼저 나오는
```
ios::sync_with_stdio(false); // 입력을 빠르게 하기 위해(속도차이 남)
cin.tie(0) ; //입력 속도 위함 2

```
에서 
ios:: sync_with_stdio(false);
는 C와 C++의 표준 stream을 동기화를 비활성화하고
cin.tie(0); 
은 . cin(C에서의 scanf 역할) 과 cout(C에서의 printf 역할)을 묶지 않음으로
입출력 시간을 줄일 수 있다.(코딩 테스트에서 유용하게 쓰일 것 같다)


#### 2) VECTOR.CPP

```cpp
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

```

#### 3) SET.CPP

```cpp
#include<iostream>
#include<set>

using namespace std;

//sort+Only one
int main(void){
    ios::sync_with_stdio(false); cin.tie(0);

    set <int> s;

    s.insert(3);
    s.insert(1) ;
    s.insert(6);

    s.insert(1);

    set<int>::iterator iter;

    for (iter =s.begin() ; iter !=s.end();iter++){
        cout << *iter << ' ';
    }

    cout << '\n';
    return 0;

}
```

#### 4) UNORDERED_SET.CPP
```cpp
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
```

#### 5) UNORDERED_MAP.CPP
```cpp
# include <iostream>
# include <unordered_map>

using namespace std ;

int main (void) {
    ios::sync_with_stdio(false); // 입력을 빠르게 하기 위해(속도차이 남)
    cin.tie(0) ; //입력 속도 위함 2

    unordered_map<int,int>m;

    m.insert(make_pair(2,3)) ;
    m.insert(make_pair(1,5)) ;
    m.insert(make_pair(8,1)) ;

    m[3]=5;


    for (auto iter = m.begin() ;iter != m.end() ;iter++){
        cout << iter ->first << ' ' << iter->second << '\n'; // first: key, second:value
    }

    return 0;
}
```

#### 6) MAP.CPP
```cpp
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
```


