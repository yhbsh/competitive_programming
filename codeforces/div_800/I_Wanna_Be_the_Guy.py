n = int(input())
x = list(map(int, input().split()))
y = list(map(int, input().split()))

x.remove(x[0])
y.remove(y[0])

if sum(set(x) | set(y)) == n*(n+1)//2:
    print("I become the guy.")
else:
    print("Oh, my keyboard!")
