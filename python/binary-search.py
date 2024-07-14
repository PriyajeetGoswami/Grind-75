# Input: nums = [-1,0,3,5,9,12], target = 9
# Output: 4
# Explanation: 9 exists in nums and its index is 4

class Solution(object):
    def search(self, nums, target):
        low, high = 0, len(nums)-1
        while(low <= high):
            mid = (low+high)//2
            if nums[mid] == target:
                return mid
            elif nums[mid] <= target:
                low = mid+1
            else: 
                high = mid-1
        return -1
    
if __name__ == "__main__":

    solution = Solution()

    nums = [-1,0,3,5,9,12]
    target = 9

    result = solution.search(nums, target)
    print(result)
