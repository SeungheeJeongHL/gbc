##### 알고리즘 Day2

## Stack Queue

#### 1) Stack

- stack란?
    - stack이란, 영어로 번역하면 "쌓아올린 더미"라는 뜻으로,  자료의 출력 순서가 자료의 입력 순서의 반대로 나올 때 사용하는 자료구조이다. 즉, 먼저 들어간 자료가 나중에 나오는 LIFO(Last in First out) 구조아다
    ex) 핸드폰을 할 때, 뒤로 가기 버튼을 누르면, 바로 직전의 화면이 나오는 구조 등을 구현할 때 사용
    
-  stack애서 사용하는 문법

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
    를 사용하는데, 이는 정수가 들어갈 stack을 만드는데 그 stack의 이름이 s라는 뜻이다.

    (3)
    stack에서 사용하는 함수들을 살펴보자면 
    - s.push(값); //stack s에 값을 추가
    - s.empty(); // stack이 빈공간인지 확인, 빈공간이면 true를, 빈공간이 아니면 false를 리턴
    - s.top(); // stack의 가장 윗 데이터(stack에 남아있는 데이터 중 가장 마지막에 들어온 값)를 리턴
    - s.pop(); // stack의 가장 윗 데이터를 삭제
    이 있다.

  

#### Queue

- Queue란?
  - 자료의 출력 순서가 자료의 입력 순서와 같올 때 사용하는 자료구조이다. 즉, 먼저 들어간 자료가 먼저 나오는 FIFO(First in First out) 구조이다.

- Queue에서 사용하는 문법

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
    가 사용되고, 
    ```
    queue< pair<int, int> > QP;
    ```
    queue의 한 층(?)에 두 개의 변수를 저장할 수 있는 QP를 만들기 위해 위와 같은 코드가 사용된다. 

    (3)
    queue에서 사용하는 함수들을 살펴보면 
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
- deque에서 사용하는 문법

    (1)
    ```
    #include <deque>
    ```
    deque를 사용할 때는 위 코드를 헤더에 추가한다.

    (2)
    deque의 특성을 가진 D 공간을 만들고 선언하기 위해 
    ```
    deque<int> D;
    ```
    가 사용된다.

    (3)
    deque에서 사용하는 함수들을 살펴보면 
    - D.push_back(값); // Deque D의 뒤에서 값을 추가
    - D.push_front(값); // D의 앞에서 값을 추가
    - D.empty(); // deque가 비었는지 확인. 빈공간이면 true를, 빈공간이 아니면 false를 리턴
    - D.front(); // D에서 가장 앞에 있는 값을 리턴
    - D.back(); // D에서 가장 뒤에 있는 값을 리턴
    - D.pop_front(); // D에서 가장 앞에 있는 값을 삭제
    - D.pop_back(); // D에서 가장 뒤에 있는 값을 삭제

 *이해를 위해서 stack과 queue는 비커과 같이 넣는 곳과 나가는 곳이 위, 아래인 느낌을 생각하고 deque는 배열처럼 터널처럼 넣는 곳과 나가는 곳이 오른쪽, 왼쪽인 느깜을 생각해도 좋을듯!