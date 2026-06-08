class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        n = len(heights)
        st = []

        lt = [-1] * n
        for i in range(n):
            while st and heights[st[-1]] >= heights[i]:
                st.pop()
            if st:
                lt[i] = st[-1]
            st.append(i)

        st = []
        rt = [n] * n
        for i in range(n-1,-1,-1):
            while st and heights[st[-1]] >= heights[i]:
                st.pop()
            if st:
                rt[i] = st[-1]
            st.append(i)
        
        mxa = 0
        for i in range(n):
            lt[i] += 1
            rt[i] -= 1
            mxa = max(mxa, heights[i] * (rt[i] - lt[i] + 1))
        
        return mxa
        