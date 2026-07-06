#include <iostream>
using namespace std;
int main(){
    int num, sum = 0;
    cout<<"enter a number:";
    cin>>num;
    while(num!=0){
        int digit = num%10;
        sum = sum+digit;
        num = num/10;
    }
    cout<<"sum of digits:"<<sum<<endl;
    return 0;
}

