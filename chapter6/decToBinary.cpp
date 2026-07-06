#include<iostream>
using namespace std;

int decToBinary(int decnum){
    int ans = 0, pow = 1;

    while (decnum > 0){
        int rem = decnum % 2;  // remainder ko nikal rhe h 
        decnum /= 2;   //decimal number update

        ans += (rem * pow);  // jo bhi remender aa rha he vo power se multiply hoga then answer me update hoga
        pow *= 10;  // power update hogi by 10
    }
    return ans;
    
}
int main(){
    
    // cout<<"decimal to binary : "<< decToBinary(50)<<endl;
    
    for(int i = 1; i<=12; i++){
        cout<<decToBinary(i)<<endl;
    }
    return 0;
}