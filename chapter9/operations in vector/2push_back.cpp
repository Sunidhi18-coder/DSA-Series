#include<iostream>
#include<vector>
using namespace std;

int main(){

vector<int> vec;

cout<<"size = "<<vec.size() <<endl;
vec.push_back(30);
vec.push_back(40);
vec.push_back(50);
vec.push_back(60);
cout<<"After push back, the size = "<< vec.size()<<endl;


    return 0;
}