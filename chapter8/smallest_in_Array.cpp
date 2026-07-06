#include<iostream>
using namespace std;
int main(){
    int nums[] = {34, 56, 67, -45, 45, 78};
    int size = sizeof(nums) / sizeof(nums[0]);

// printing given data
    cout<<"all array elements are : ";
    
    for(int i = 0; i < size; i++){
    cout<< nums[i] <<" ";
}
    cout<<endl;

    int smallest = INT16_MAX;  // INT_MAX ==> positive infinity
    int largest = INT16_MIN;  //  INT_MIN ==> negative infinity

    for(int i = 0; i<size; i++){
        smallest = min(nums[i], smallest);
        largest = max(nums[i], largest);

    }

    cout<<"smallest number is : "<<smallest<<endl;
    cout<<"largest number is : "<<largest<<endl;
    return 0;

}