#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number to check the number is prime number or not: "<<endl;
    cin>>n;
    bool isPrime = true;

    for(int i=2; i<=n-1; i++){
        if(n%i==0){
            isPrime =false;
            break;
        }
    }
    if(isPrime == true){
        cout<<n<<" is prime number";
    }else{
        cout<<n<<" is not a prime number";
    }
    return 0;
}