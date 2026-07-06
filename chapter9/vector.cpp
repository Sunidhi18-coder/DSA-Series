// syntax - 1. vector<int> vec;
//          2. vector<int> vec = {1, 2, 3, 4}
//          3. vectore<int>vec (size of vector, vallue for all index) like (3,0)
#include<iostream>
#include<vector>
using namespace std;

int main(){

// cout<<"printing 1st form"<<endl;
//     vector<int> vec;
//     cout<< vec[0]<<endl;

// cout<<"printing 2nd form"<<endl;

//     vector<int> vec1 = {1, 2, 3};
//     cout<< vec1[0] <<endl;
//     cout<< vec1[1] <<endl;
//     cout<< vec1[2] <<endl;

cout<<"printing 3rd form"<<endl;

    vector<int>vec2(5,1);
    cout<< vec2 [0] <<endl;
    cout<< vec2 [1] <<endl;
    cout<< vec2 [2] <<endl;
    cout<< vec2 [3] <<endl;
    cout<< vec2 [4] <<endl;

    return 0;
}