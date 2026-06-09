class Solution:

    def search(self, nums: List[int], target: int) -> int:
        n = len(nums)


        l,r = 0, n-1

        

        while l<=r :
            mid = l + int((r-l)/2)

            if nums[mid] == target:
                return True
            elif target < nums[mid]:
                r = mid - 1
            elif target > nums[mid]:
                l = mid + 1
        
        return False

    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        m = len(matrix)
        n = len(matrix[0])

        for i in range(1,m):

            if(matrix[i][0]> target):
                return self.search(matrix[i-1], target)
        else:
            return self.search(matrix[m-1], target)

