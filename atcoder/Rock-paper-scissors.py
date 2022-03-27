x, y = map(int, input().split())
 
def sol(x, y):
    if x == y:
        return x
    else:
        if x == 1 and y == 0:
            return 2
        if x == 0 and y == 1:
            return 2
        if x == 2 and y == 1:
            return 0
        if x == 1 and y == 2:
            return 0
        if x == 0 and y == 2:
            return 1
        if x == 2 and y == 0:
            return 1
print(sol(x, y))