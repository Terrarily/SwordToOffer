#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        int SerachInsert(vector<int> &nums,int target) {
            int left = 0;
            int right = nums.size() - 1;
            int midle;
            while (left <= right)
            {
                midle = left + (right - left)/2;
                if (target <= nums[midle])
                {
                    right = midle -1;
                } else {
                    left = midle + 1;
                }
            }
            return left;
        }
};