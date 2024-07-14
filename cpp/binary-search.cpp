#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0 ;
        int high = nums.size()-1 ;

        while(low<=high){
            int mid = low + (high -low )/2;
            if (nums[mid] == target) {
                return mid ;
            }
            else if(nums[mid] > target ){
                high = mid -1  ;
            }
            else if(nums[mid] < target ){
                low = mid +1 ;
            }
            // mid = low + (high -low )/2;
        }
        return -1 ;
    }
};

int main() {
    Solution myObject; // Create an instance of MyClass

    // Call the Public Function Using the Instance
    vector<int> nums({-1,0,3,5,9,12});
    int target = 5;
    
    cout << myObject.search(nums, target) << "\n";

    return 0;
}