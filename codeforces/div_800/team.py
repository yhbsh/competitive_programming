n = int(input())
count = 0
for i in range(n):
    x, y, z = input().split()
    if int(x) + int(y) + int(z) >= 2:
        count += 1
 
print(count)