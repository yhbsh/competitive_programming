arr = []
for i in range(5):
    dum = list(map(int, input().split()))
    arr.append(dum)
def sol(arr):
    for i in range(5):
        for j in range(5):
            if arr[i][j] == 1:
                return abs(2-i) + abs(2-j)
    
print(sol(arr))