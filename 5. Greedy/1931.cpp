#include <iostream>
#include <algorithm>

using namespace std;
pair <int, int> arr[100010];
int N;
int cnt=1;
int main(void){
    ios::sync_with_stdio (false); cin.tie(0);
    cin >> N;

    for (int i=0,a,b;i<N;i++){
        cin >> a >> b;
        arr[i]={b,a};
    }

    sort (arr, arr+N);




        
    cout << cnt << '\n';

    return 0;
}