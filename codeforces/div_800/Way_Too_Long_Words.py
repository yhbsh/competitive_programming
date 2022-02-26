n = int(input())
 
ans = []
for i in range(n):
    s = input()
    if len(s) > 10:
        ans.append(f"{s[0]}{len(s)-2}{s[len(s)-1]}")
    else:
        ans.append(s)
 
for i in ans:
    print(i)