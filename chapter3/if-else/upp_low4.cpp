#include <iostream>
using namespace std;
int main(){
    int character;
    cout<<"enter any character"<<endl;
    cin>>character;

    if(character>='a' && character<='z'){
        cout<<"lowwer case character";
    }
    else{
        cout<<"upper case character";
    }
    return 0;
}