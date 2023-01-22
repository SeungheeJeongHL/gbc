#include <iostream>

using namespace std;

int N;
long long F[100];
int main (void){
    cin >> N;
    
    F[0]=0;
    F[1]=1;
    
    for (int i=2;i<=N;i++){
        F[i]=F[i-2]+F[i-1];
    }

    cout << F[N] << '\n';

    return 0;
}

// Long long 안쓰면 이상하게 값이 나옴.