class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        a = digits
        i = len(a) - 1
        if a[0] == 9 and i == 0:
            a[0] = 0
            a.insert(0, 1)
        else:
            while a[i] == 9 and i >= 0:
                a[i] = 0
                i -= 1

            if a[0] == 0 and len(a) > 1:
                a.insert(0, 1)
            else:
                a[i] += 1

        return a
