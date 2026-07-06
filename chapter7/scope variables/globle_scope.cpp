// global variable vo variable hoto he jo har jagah se accesinble hote he 
// har function me hum ise use kr sakte he ye hamesha har function ke bahar hi declaired hote he 


#include<iostream>
using namespace std;

int x = 10; // globle variable 

void fun(){

    cout << x <<endl;  // x accesible here
}
int main(){

    cout<<x<<endl; // x accesible here

    return 0;
}