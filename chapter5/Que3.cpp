// calculate the sum of digits of number

#include<iostream>
using namespace std;

int sumDigit(int num){
    int digSum = 0;

    while(num > 0){
        int lastDig = num%10;
        num = num/10;
        digSum += lastDig;

    }
    return digSum;
}

int main(){
    cout<<" sum of digits you entered : "<<sumDigit(1234)<<endl;
    cout<<" sum of digits you entered : "<<sumDigit(4563)<<endl;
    cout<<" sum of digits you entered : "<<sumDigit(6261044962)<<endl;


    return 0;
}