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

(1) 제일 위에 쓰는 

```
#include <iostream>
```
은 Input/Output Stream이라는 의미이다.

C언어에서 코드 입력을 시작하면 #include <stdio.h>를 쓰고 시작하는 것과 비슷한 느낌인 것 같다.

(2) 
````
using namespace std
````

는  std라는 클래스에 정의되어 있는 함수들을 사용하기 위해 사용하는 코드이다.
이 코드를 적으면 범위 지정 연산자(::)의 사용을 줄일 수 있다.
(그런데 구글링해보니 using namespace std를 사용하지 말라는 내용도 많았음!)

(3)
메인함수 안을 한번 살펴보면! 가장 먼저 나오는
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

vector란, 자동으로 메모리가 할당되는 배열이다. vector의 장점으로는 먼저 배열과 달리 자동으로 메모리를 할당시켜주어 처음부터 원소의 개수를 지정해둘 필요가 없고, 원소의 삽입, 삭제 시 효율적인 메모리 관리가 가능하다는 점이 있다.
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
(1)
코드를 통해, vector를 사용하기 위해서는 

```
#include <vector>
```
를 추가해야한다는 것을 알 수 있다.

(2)
```
vector <int> V;
```
의 내용은, < >안에 있는 타입, 즉 int의 빈 배열을 만드는데, 그 배열의 이름이 V라는 것이다.

(3)
```
cout << "SIZE: " << V.size() << '\n' ;
```
에서 V.size()는 벡터의 원소 개수를 반환한다.

(4)
```
V.push_back(값);
```
은 새로운 원소를 추가할 때 사용하는 메소드이다.

(5) 
```
V.pop_back();
```
은 맨 뒤에 요소를 삭제할 때 사용하는 메소드이다. 
위 코드에서는 V.push_back()으로 제일 나중에 배열에 추가된 0이 삭제됨을 볼 수 있다. 

(6)
```
vector<int>::iterator iter ;
for (iter=V.begin();iter !=V.end();iter++){
        cout << *iter << ' ';
    }
```

애서 vector<int>::iterator iter는 vector의 반복자 iter을 선언한 것인데, vector<unt>는 vector의 타입을 명시한다고 생각하면 될 것 같다. for 문 안에 있는 V.begin()은 벡터의 데이터가 있는 리스트의 시작 주소, 즉 첫번째 값을 의미하고, V.end()는 리스트의 끝 주소, 즉 마지막 값보다 한 칸 뒤 위치의 값을 의미한다. 
그리고 iter를 cout할 때는 *를 붙여 현재 가르키는 칸의 값을 리턴한다고 생각하면 될 것 같다.

#### 3) SET.CPP

set이란, 숫자든 문자든 중복을 없애고 삽입하는 순서에 상관없이 정렬되서 입력이 되는 컨테이너이다.
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
(1) 
set을 사용할 때는 
```
#include <set>
```
을 추가한다.

(2) 
set을 선언할 때는 
```
set <int> s
```
의 형식으로 선언하는데, 이는 set <자료형> 변수의 형식이다.

(3) 
set.insert(값)은 set에 값을 삽입, s.begin()은 set의 시작이 되는 주소값, set.end()는 set의 마지막 부분에 대한 주소 값(정확히는 마지막 뒤 공백구간)을 의미한다.

#### 4) UNORDERED_SET.CPP
unordered set이란, 기존 set에서 중복 제거와 정렬을 동시에 한 것과 달리, 중복만 제거를 해서 삽입한 순서를 유지하는 구조이다.
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
unordered_set의 사용방법은 
(1) 
````
#include<unordered_set>
````
을 사용하고 기존 set의 자리를 unordered_set로 대체하면 된다.

#### 5) MAP.CPP

map이란, key, Value 쌍인 데이터를 관리하는 자료구조이다. map에서는 set과 비슷하게 자동정렬이 되고, 중복을 허용하지 않는다.
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
(1) 
map을 사용하기 위해서는 먼저,
```
#include <map>
```
을 작성한다.

(2) 
주어진 코드에서 나온 
```
map<int,int>m
```
은, map을 선언하는 방식이다.
즉, map<Datatype1,Datatype2>[변수이름]의 형식을 가진다.

(3) 
m에 원소를 추가하는 방법은 2가지가 있는데, 첫번째 방식은 
```
m.insert(make_pair(8,1)) ;
```
을 사용하는 것으로, m.insert까지는 set과 vector에서와 비슷한 문법이지만, key와 value값을 같이 받아야하기 때문에 make_pair(key,value);를 사용해야한다.

두번째 방법은 
```
m[3]=5;
````
와 같이, m[key]=value;의 형식으로 추가하는 방법이다. 이때, 만약 이미 key값에 존재하는 value가 있다면, 수정이 된다.

(4) 
코드의 마지막 부분을 살펴보면 다음과 같은데,
```cpp
for (auto iter = m.begin() ;iter != m.end() ;iter++){
        cout << iter ->first << ' ' << iter->second << '\n'; // first: key, second:value
    }

    return 0;
```
먼저, auto iter는 컴파일을 할때, 컴파일러가 자동으로 타입을 결정해주는 키워드이다.
그리고, iter -> first는 iter에서의 key를, iter->second는 iter애서의 value를 나타낸다. 
그 외에, m.begin()과 m.end()는 위에 나온 set, vector에서의 문법과 거의 비슷하다.


#### 6) UNORDERED_MAP.CPP

unordered_map은 map보다 더 빠른 탐색을 하기 위한 자료구조로, map에서 중복 제거와 정렬을 하는것과 달리, unordered_map에서는 중복 제거만 하고, 정렬을 하지 않는다는 차이점이 있다.
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
unordered_map의 사용방법은 

(1) 
````
#include<unordered_map>
````
을 사용하고 기존 map의 자리를 unordered_map로 대체하면 된다.