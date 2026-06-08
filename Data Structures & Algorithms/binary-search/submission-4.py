class Solution:
    def search(self, nums: List[int], target: int) -> int:
        n = len(nums)


        l,r = 0, n-1

        

        while l<=r :
            mid = l + int((r-l)/2)

            if nums[mid] == target:
                return mid
            elif target < nums[mid]:
                r = mid - 1
            elif target > nums[mid]:
                l = mid + 1
        
        return -1


