// Local variable - function ke under agar variable declaire ho gya he to vo sirf usi 
// function me access ho sakta he baki kisi bhi function me access nhi ho sakta he  

// example --> 

#include<iostream>
using namespace std;

void fun(){

    int x = 10;  //local variable

}
int main(){
    
    fun();
    // cout<< x << endl;   (error show)
//  X accessible nhi he  
    return 0;
}