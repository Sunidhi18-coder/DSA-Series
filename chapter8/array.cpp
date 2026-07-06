#include<iostream>
using namespace std;
int main(){

    int marks[5] = {98, 78, 67, 56, 45};

    int size = sizeof(marks[0]);

    for(int i = 0; i < size; i++){
        cout<< marks[i] << " ";
    }
    cout<<endl;

    cout<< marks[2]<<endl;
    return 0;
}