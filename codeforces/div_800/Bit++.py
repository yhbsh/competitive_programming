arr = []
n = int(input())
ans = 0
for i in range(n):
    s = input()
    arr.append(s)
    
for i in arr:
    if i == "X++" or i == "++X":
        ans += 1
    else:
        ans -= 1
 
print(ans)