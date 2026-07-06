//data modifiers are used to store the space in the memmory
// int takes => 4byte ==>32 bits
// long size ko increase krta he 
// short size ko decrease kr deta he 
// long long takes 8byte 
// signed int stores positive as well as negative data types
// unsigned only positive numbers used for customer id ya bank account number

#include<iostream>
using namespace std;
int main(){

    cout<<sizeof(int)<<endl;
    cout<<sizeof(long int)<<endl;
    cout<<sizeof(short int)<<endl;
    cout<<sizeof(long long)<<endl;


    return 0;
}
