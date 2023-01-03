##### 알고리즘 Day2

## Stack Queue

#### 1) Stack

- stack란?
    - stack이란, 영어로 번역하면 "쌓아올린 더미"라는 뜻으로,  자료의 출력 순서가 자료의 입력 순서의 반대로 나올 때 사용하는 자료구조이다. 즉, 먼저 들어간 자료가 나중에 나오는 LIFO(Last in First out) 구조아다
    ex) 핸드폰을 할 때, 뒤로 가기 버튼을 누르면, 바로 직전의 화면이 나오는 구조 등을 구현할 때 사용
    
- stack의 구현 코드 
```cpp
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
```
코드를 통해, stack을 사용하는 문법에 대해 알아보자면, 

(1) 
```
#include <stack>
```
stack을 사용할 때는 header에 위 코드를 추가한다.

(2)
stack이라는 공간을 만들고 선언하기 위해 
```
stack<int> s;
```
를 사용했는데, 이는 정수가 들어갈 stack을 만드는데 그 stack의 이름이 s라는 뜻이다.

(3)
위에 사용된 함수들을 살펴보자면 
  - s.push(값); //stack s에 값을 추가
  - s.empty(); // stack이 빈공간인지 확인, 빈공간이면 true를, 빈공간이 아니면 false를 리턴
  - s.top(); // stack의 가장 윗 데이터(stack에 남아있는 데이터 중 가장 마지막에 들어온 값)를 리턴
  - s.pop(); // stack의 가장 윗 데이터를 삭제
  이 있다.

  

#### Queue

- Queue란?
  - 자료의 출력 순서가 자료의 입력 순서와 같올 때 사용하는 자료구조이다. 즉, 먼저 들어간 자료가 먼저 나오는 FIFO(First in First out) 구조이다.
- Queue의 구현 코드
```cpp
#include <iostream>
#include <queue>

using namespace std;



int main(void) {
    ios:: sync_with_stdio(false); cin.tie(0);

    int array[10];


    queue<int> Q; //앞이 열려있음
    queue< pair<int, int> > QP;

    Q.push(3);
    Q.push(4);
    Q.push(5);

    QP.push (make_pair(3,4));
  

    while(!Q.empty()){
        int k=O.front();
        cout << k << '\n';
        Q.pop();
    }

    return 0;



}
```
코드를 통해 queue가 사용하는 문법을 알아보자면, 
(1) 
```
#include <queue>
```
queue를 사용할 때 header에 위 코드를 추가한다.

(2)
queue의 특성을 가진 Q 공간을 만들고 선언하기 위해 
```
queue<int> Q;
```
가 사용되었고,
```
queue< pair<int, int> > QP;
```
queue의 한 층(?)에 두 개의 변수를 저장할 수 있는 QP를 만들기 위해 위와 같은 코드가 사용되었다.

(3)
위에 사용된 함수들을 살펴보면 
- Q.push(값); // queue Q에 값을 추가
- QP.push(make_pair(값1, 값2)); // (값1,값2)로 묶은 pair(쌍)을 만들어 queue pair OQ에 묶은 pair을 추가
- Q,empty(); // queue가 비었는지 확인. 빈공간이면 true를, 빈공간이 아니면 false를 리턴
- Q.front(); // Q에 가장 먼저 들어간 값 리턴
- Q.pop(); // Q에 가장 먼저 들어간 값 삭제
이 있다.
그리고 위 코드에 쓰이지는 않았지만 
- Q.back();//Q에 가장 마지막에 들어간 값 리턴
도 알고 있어야한다.

#### 3) Deque

- deque란?
  - queue와 비슷하지만, 삽입과 삭제가 앞, 뒤 양쪽에서 모두 가능한 자료구조이다.
- deque의 구현 코드

```cpp
#include <iostream>
#include <deque>

using namespace std;

int main(void){
    ios :: sync_with_stdio(false); cin.tie(0);

    deque<int> D; //stack+que

    D.push_back(2);
    D.push_back(3);
    D.push_back(4);

    D.push_front(1);

    while(!D.empty()){
        int k= D.front();
        cout << k << '\n';
        D.pop_front();
    }
     cout << '\n';

    D.push_back(2);
    D.push_back(3);
    D.push_back(4);

    D.push_front(1);

    while(!D.empty()){
        int k= D.back();
        cout << k << '\n';
        D.pop_back();
    }
     cout << '\n';

    
     

    return 0;
}
```


