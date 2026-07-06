#include<iostream>
using namespace std;
void nums(int n ){
    if (n == 1){
        cout<< "1"<<endl;
        return;
    }
    cout<< n <<" ";
    nums(n-1);
}
int main(){
    
    nums(15);
    return 0;
}