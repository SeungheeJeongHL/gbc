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

    int start=arr[0].second;
    int end=arr[0].first;

    for (int i=0;i<N;i++){
        if (start > arr[i].second) start=arr[i].second;
    }

    
        
    cout << cnt << '\n';

    return 0;
}