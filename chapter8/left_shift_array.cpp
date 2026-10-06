#include <iostream>
using namespace std;

void leftrotate(int arr[], int n){
    int first = arr[0];

    for(int i = 0; i < n - 1; i++){
        arr[i] = arr[i + 1];
    }
    arr[n-1] = first;
}
int main(){

    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    leftrotate(arr,n);
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;

}