##### 알고리즘 DAY5

## DP

- DP란
  - DP(Dynamic Programming, 동적 계획법)는 하나의 큰 문제를 여러개의 작은 문제로 나누어서 그 결과를 저장하여 다시 큰 문제를 해결할 때 사용하는 기법이다. 
  - DP의 목적: 반복연산을 줄이기 위함.
  - DP 문제의 해결: 점화식(인접한 항들 사이의 관계식) 찾기
  - DP의 특징: 초기값은 무조건 알아야함.
             greedy와 비교했을 때 global
  - DP의 방법으로는 Bottom-up과 Top-down이 있다. 
    - Bottom-up : 밑의 값을 설정하고(깔아놓고) 위의 값을 예측
    - Top-down : 구하고자 하는 값에서 최소 단위로 쪼개져서 값을 구함.
  - ex) 피보나치 수열, 설탕분배


- 설탕 분배 코드 구현

```cpp

#include <iostream> 

using namespace std ;

int N ; 
int DP[5010]; 

int main(void) { 

    ios::sync_with_stdio(false); cin.tie(0); 

    cin >> N ; 

    DP[3] = 1 ; 
    DP[5] = 1 ; 

    for (int i = 6 ; i <= N; i++) {
        if ( DP[i - 3] ) DP[i] = DP[i - 3] + 1 ; 
        if ( DP[i - 5] ) DP[i] = DP[i] ? min(DP[i], DP[i - 5] + 1) : DP[i - 5] + 1 ; 
    }
    /*
        DP[3] = DP[5] = 1 
        DP[6] = DP[3] + DP[3] 
        DP[7] = 0 
        DP[8] = DP[3] + DP[5] 
        DP[9] = DP[6] + DP[3] 
        DP[10] = DP[5] + DP[5]
        DP[11] = 0 
        DP[12] = DP[9] + DP[3]  
        … 
        DP[15] = min(DP[10] + DP[5] vs DP[12] + DP[3]) 
        ..
        DP[18] = DP[15] + DP[3]  
         
    */ 
    if ( DP[N] != 0) cout << DP[N] << '\n'; 
    else cout << -1 << '\n'; 

    return 0 ; 
}

```