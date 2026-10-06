// right shift the array by one

#include <iostream>
using namespace std ;

void rightShift(int arr[], int n){
    int last = arr[n - 1];

    for(int i = n-1; i>0; i--){
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
}

int main(){
    int n;
    cout <<" Enter number of element : " ;
    cin >> n;
    int arr[n];

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    rightShift(arr, n);

    cout << "Array after right shift : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}