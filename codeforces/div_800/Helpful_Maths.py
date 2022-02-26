 
arr = input()
ans = []
for i in arr:
    if i != "+":
        ans.append(i)
ans.sort()
i = 1
while(i < len(arr)-1):
    ans.insert(i, "+")
    i += 2
 
for i in ans:
    print(i, end="")