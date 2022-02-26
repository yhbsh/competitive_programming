 
s1 = input().upper()
s2 = input().upper()
 
def sol(s1, s2):
    i = 0
    while i < len(s1):
        if ord(s1[i]) < ord(s2[i]):
            return -1
        elif ord(s1[i]) > ord(s2[i]):
            return 1
        i += 1
    return 0
 
print(sol(s1, s2))