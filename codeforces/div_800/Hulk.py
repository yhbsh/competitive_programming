n = int(input())
s = ""

for i in range(n-1):
    if i % 2 == 0:
        s += "I hate that "
    else:
        s += "I love that "
if n % 2 == 0:
    s += "I love it "
else:
    s += "I hate it "

print(s)
