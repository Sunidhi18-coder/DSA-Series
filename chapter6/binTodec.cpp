#include<iostream>
using namespace std;

int binTodec(int binNum){
    int ans = 0, pow = 1;

    while (binNum > 0){
        int rem = binNum / 10;  // remender find
        ans = rem * pow;  // rem or power

        binNum /=10;  // num update
        pow *= 2;   // power update
    }
    return ans;
}

int main(){
    cout<< binTodec(1001)<<endl;
    return 0;
}