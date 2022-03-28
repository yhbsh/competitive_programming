def climbingLeaderboard(ranked, player):
    ranked = sorted(list(set(ranked)), reverse=True)

    ranks = []

    # print(ranked)

    for i in range(len(player)):
        bi = 0
        bs = len(ranked) - 1
        index = 0
        while (bi <= bs):
            mid = (bi+bs) // 2
            if (ranked[mid] > player[i]):
                index = mid
                bi = mid + 1
            else:
                bs = mid - 1

        if (ranked[index] > player[i]):
            index += 1

        index += 1

        ranks.append(index)

    return ranks
