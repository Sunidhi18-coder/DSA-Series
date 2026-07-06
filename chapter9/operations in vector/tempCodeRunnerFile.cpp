#include<iostream>
#include<vector>
using namespace std;

int main(){

vector<int> vec;

cout<<"size = "<<vec.size() <<endl;
vec.push_back(30);
cout<<"After push back, the size = "<< vec.size()<<endl;

for(int val : vec){
    cout<<val<<endl;
}
    return 0;
}