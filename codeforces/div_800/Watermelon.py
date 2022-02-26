n = int(input())
 
def sol(n):
    if n == 0 or n == 2:
        return "NO"
    else:
        if n % 2 == 0:
            return "YES"
        return "NO"
 
print(sol(n))