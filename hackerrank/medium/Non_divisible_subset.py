def nonDivisibleSubset(k, s):
    remainder = [0] * k
    for i in s:
        remainder[i % k] += 1

    maxnum = 0
    maxnum += min(remainder[0], 1)
    if k % 2 == 0:
        maxnum += min(remainder[k//2], 1)
    for i in range(1, k//2 + 1):
        if i != k - i:
            maxnum += max(remainder[i], remainder[k-i])

    return maxnum
