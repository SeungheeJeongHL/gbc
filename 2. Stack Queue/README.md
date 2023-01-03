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

