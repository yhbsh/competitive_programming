ans = []
 
def sol(n, k, arr):
    count = 0
    for i in range(n):
        if arr[k-1] == 0 and arr[i] == arr[k-1]:
            count += 0
        elif arr[k-1] <= arr[i]:
            count += 1
        else:
            count += 0
 
    return count
 
n, k = map(int, input().split())
arr = list(map(int, input().split()))
ans.append(sol(n, k, arr))
 
for i in ans:
    print(i)