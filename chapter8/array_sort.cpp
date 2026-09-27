#include <iostream>
using namespace std;

int main(){
    int n;

    //user input
    cout<< "Enter number of element : ";
    cin>>n;
    int arr[n];
    cout << "enter " << n << " numbers : ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    //Bubble sort
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    //print sorted array
    for(int i = 0; i < n; i++){
        cout << arr[i] <<" ";
    }
    return 0;
}