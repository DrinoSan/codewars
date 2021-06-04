def persistence(n):
    res = list(str(n))
    tmp = 1
    counter = 0
    while True:
        counter += 1
        for digit in res:
            tmp *= int(digit)
        res = str(tmp)
        if len(str(res)) == 1:
            return counter
        tmp = 1



print(persistence(39))
