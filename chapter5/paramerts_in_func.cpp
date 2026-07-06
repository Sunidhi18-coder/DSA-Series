// #include<iostream>
// using namespace std;

// //sum of 2 numbers 
// int sum(int a, int b){
//     int s = a + b;
//     return s;
// }

// int main(){
//     cout<<sum(10 , 5);
//     return 0;
// }

#include<iostream>
using namespace std;

// min of two numbers 
int minOfTwo(int a, int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}
int main(){
    cout<<"min = "<< minOfTwo(100, 50);  // (arguments,,)
    return 0;

}