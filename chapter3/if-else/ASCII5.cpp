// ASCII VALUES
//  A-Z = 65-90
// a-z = 97-123

#include <iostream>
using namespace std;
int main(){
     int ch;
    cout<<"enter any character"<<endl;
    cin>>ch;

    if(ch>=65 && ch<=90){
        cout<<"Upper case character";
    }
    else{
        cout<<"Lower case character";
    }
    return 0;
}