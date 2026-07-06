// jab bhi values strore krna ke liye memory me jagah km padti he to vo khud se apni capacity ko doble kr deta he 

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4); 
    vec.push_back(5);  

    for (int value : vec){
        cout<< value<<endl;
    }
    
    cout<< " size = "<< vec.size()<< endl;
    cout<< "capasity = "<< vec.capacity()<<endl;

    return 0;

}