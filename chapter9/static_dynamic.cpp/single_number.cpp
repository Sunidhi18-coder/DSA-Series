// leet code question ---- Given aa non empty array of integers nums, every elements appears twice exapt for one .find that single one 
//  you must implement a solution with a linear runtime complexity and use only constant extra space 
// Note ---- n^n = 0
// Note ---- n^0 = n

#include <iostream>
#include <vector>
using namespace std;


vector<int> num = {4, 1, 2, 1, 2};
class solution {
    public:
        int singleNumber(vector<int>& nums ){
            int ans = 0 ;
            for(int val : nums ){
                ans = ans^val;
            }

            return ans;
        }
};