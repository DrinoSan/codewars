# https://en.wikipedia.org/wiki/Partition_(number_theory)#



def exp_sum(n):
    parts = [1]+[0]*n
    for t in range(1, n+1):
        for i, x in enumerate(range(t, n+1)):
            parts[x] += parts[i]
    return parts[n]



print(exp_sum(3))
