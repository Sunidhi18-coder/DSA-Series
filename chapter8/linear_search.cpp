// time complexity of linear search is => O(n)

#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int target ){

    for(int i = 0; i <size; i++){
        if (arr[i] == target){  //found 
            cout<<"target found at index : ";

            return i ;
        }
    }
    return -1; // not found
}

int main(){

    int arr[] = {2, 4, 7, 8, 1, 2, 5};
    int size = 7;
    int target = 80;
    
    cout<<linearSearch( arr, size, target);

    return 0;
}