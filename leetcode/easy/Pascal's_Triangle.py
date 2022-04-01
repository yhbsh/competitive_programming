class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        ans = []
        for i in range(numRows):
            lst = []
            for j in range(i + 1):
                if i == 0 or j == 0 or i == j:
                    k = 1
                else:
                    k = ans[i-1][j-1] + ans[i-1][j]
                lst.append(k)
            ans.append(lst)

        return ans
