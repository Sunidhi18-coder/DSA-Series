// calculate N fctorials

#include <iostream>
using namespace std;

int factorialN(int n){
    int fact = 1;

    for(int i=1; i<=n; i++){
        fact *= i;
    }
    return fact;

}
int main(){
    cout<<"factorial of n numbers : "<<factorialN(5)<<endl;
    cout<<"factorial of n numbers : "<<factorialN(20)<<endl;

    return 0;
}