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