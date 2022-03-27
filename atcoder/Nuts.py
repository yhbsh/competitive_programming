n = int(input())
x = list(map(int, input().split()))
ans = 0
for i in x:
    if i > 10:
        ans += i - 10
 
print(ans)