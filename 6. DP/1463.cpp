#include <iostream>

using namespace std;
int DP[100010];
int N;

int main (void){

    ios::sync_with_stdio(false);cin.tie(0);
    
    DP[1]=0;
    DP[2]=1;
    DP[3]=1;

    cin >> N;

    for (int i=4;i<=N;i++){
        DP[i]=DP[i-1]+1;
        if (i%2==0) DP[i]=min(DP[i], DP[i/2]+1);
        if (i%3==0) DP[i]=min(DP[i], DP[i/3]+1);
    }
    cout << DP[N] << '\n';
 
return 0;
}