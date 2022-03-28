def organizingContainers(container):
    row = [0] * n
    col = [0] * n

    for i in range(n):
        for j in range(n):
            row[i] += container[i][j]
            col[i] += container[j][i]

    if sorted(row) == sorted(col):
        return "Possible"
    else:
        return "Impossible"
