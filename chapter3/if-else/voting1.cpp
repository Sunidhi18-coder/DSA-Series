#include <iostream>
using namespace std;
int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if(age>=18){
        cout << "Eligible for vote" << endl;
    }
    else{
        cout << "Not eligible for vote" << endl;
    }
return 0;
}