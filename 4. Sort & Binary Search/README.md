##### 알고리즘 DAY4

# Sort & Binary Search 

#### 1) Sort 
- sort 함수란, 어떤 배열을 내림차순, 또는 올림차순으로 정렬해주는 함수이다. 


 sort.cpp 코드와 관련해 sort함수에 대해 생각을 정리해보자면, 

(1)
sort 함수를 이용하기 위해서는 먼저 헤더 파일에 
```
#include <algorithm>
```
이 있어야 한다.


(2)
array와 vector를 사용할 때 sort 함수를 쓸 수 있다. 


(3)
배열 array에서 sort 함수를 사용할 때 작성된 sort (arr, arr+10)의 뜻은 배열 array를 arr[0]부터 arr[10]까지 오름차순으로 정렬하라는 의미이다. 이 때, 위와 같이 sort의 parameter이 2개인 경우, default는 오름차순으로 정렬되는데, 이를 내림차순으로 바꾸기 위해서는 sort (arr, arr+10, greater<int>)로 변경해주면 된다. 


(4) 
vector V에서 sort 함수를 사용하는 경우에는 sort (V.begin(), V.end())를 작성하여서 V에서 V.begin() 즉 ,vector의 처음부터 vector가 끝날 때 까지 원소들을 정렬하는 것을 의미한다. vector 정렬의 default값도 오름차순으로, 내림차순으로 바꾸는 방식도 배열에서의 방식과 같다.

- sort를 커스텀한 코드 (custom_sort.cpp) 
  - vector 안에 있는 요소가 하나가 아니라 두 개 이상일 경우의 정렬을 나타내는데, 위 경우는 신장, 체중, 나이를 받아들이고 신장 순서대로 정렬하되, 만약 신장이 같을 경우에는 체중 순서로 정렬, 그리고 체중 순서까지 같을 경우에는 나이의 순서로 정렬하는 코드를 구현했다.

#### 2) Binary_Search

-Binary_Search란, 데이터가 정렬되어 있을 때, 원하는 데이터를 제일 효과적으로 찾기 위한 방법이다. binary_search라는 이름에서 나타났듯이, 데이터를 반으로 나눠, 범위를 1/2해나가며 데이터를 찾는다. 

이를 이해하기 위해서 그림을 보면!
![](binary_search.png) 
M(중간값)과 L(범위 시작 값), H(범위 끝값)을 조절하여 빠르게 원하는 값을 찾는 것을 확인할 수 있다. 

binary_search.cpp 코드에서 볼 수 있듯이, 만약에 binary_search_func , 즉, 
```cpp
// (O(log N))
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


```
을 활용하지 않으면 basic_search
```cpp
//O(N)
bool basic_search(int arr[], int element){
    for (int i=0;i<SIZE;i++){
        if (arr[i]==element){
            return 1;
        }
    }
    return 0;
}
```
를 사용해야하는데, 그러면 시간 복잡도의 차이가 O(N)과 O (logN)으로, binary_search가 훨씬 효율적이라는 것을 알 수 있다.
