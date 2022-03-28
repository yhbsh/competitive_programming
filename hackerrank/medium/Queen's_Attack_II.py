def queensAttack(n, k, r_q, c_q, obstacles):
    total = 0
    obs = {}

    for i, j in obstacles:
        if i in obs:
            obs[i][j] = 1
        else:
            obs[i] = {j: 1}

    def limit(x, y):
        return True if 1 <= x <= n and 1 <= y <= n else False

    def check(x, y, xi, yi):
        count = 0
        x += xi
        y += yi
        while limit(x, y) and obs.get(x, {}).get(y, 0) == 0:
            count += 1
            x += xi
            y += yi

        return count

    r = [0, 0, -1, 1, -1, 1, -1, 1]
    c = [1, -1, 0, 0, -1, 1, 1, -1]
    for i, j in zip(r, c):
        total += check(r_q, c_q, i, j)

    return total
