#include <iostream>
#include <algorithm>

#define SIZE 10

using namespace std;

//0(N)
bool basic_search(int arr[], int element){
    for (int i=0;i<SIZE;i++){
        if (arr[i]==element){
            return 1;
        }
    }
    return 0;
}

//O(log N)
bool binary_search_func(int arr[], int left, int right, int element){
    while (left <=right){
        int mid = (left+right)/2;

        if (arr[mid] > element ){
            right=mid-1;
        } else if (arr[mid]==element){
            return 1;
        }else {
            left =mid+1;
        }
    }
    return 0;
}

int main(void){
    ios:: sync_with_stdio(false); cin.tie(0);

    int arr[SIZE] = {16,35,52,20,71,82,41,100,94,68};

    sort (arr,arr+SIZE);

    int find_element = 52;

    if (binary_search_func (arr, 0, SIZE-1, find_element) ){
        cout << "FIND:" << find_element << '\n';
    } else{
        cout << "NOT FOUND" << '\n';
    }


    
    return 0;
}