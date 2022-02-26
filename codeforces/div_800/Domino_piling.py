ans = []
 
def sol(m,n):
    if m % 2 == 0:
        return n * (m // 2)
    return n * (m//2) + n // 2
 
m, n = map(int, input().split())
ans.append(sol(m, n))
 
for i in ans:
    print(i)