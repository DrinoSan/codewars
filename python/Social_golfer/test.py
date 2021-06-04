
s = [['ABCD', 'EFGH', 'IJKL', 'MNOP', 'QRST'],
    ['AEIM', 'BJOQ', 'CHNT', 'DGLS', 'FKPR'],
    ['AGKO', 'BIPT', 'CFMS', 'DHJR', 'ELNQ'],
    ['AHLP', 'BKNS', 'CEOR', 'DFXQ', 'GJMT'],
    ['AFJN', 'BLMR', 'CGPQ', 'DEKT', 'HIOS']]

def valid(a):
    players = dict()


    days = [len(a) for _ in a]
    if min(days) != max(days):
        return False



    groups = [len(x) for x in a]
    group_length = len(a[0][0])
    if min(groups) != max(groups):
        return False

    counter = 0
    for row in a:
        for group in row:
            counter += 1
            if group_length != len(group):
                return False
            if len(set(group)) != len(group):
                return False
            for player in group:
                if players.get(player) != None:
                    players[player] += 1
                else:
                    players[player] = 1
    
    maximum = max(players, key=players.get)
    minimum = min(players, key=players.get)
    max_players = players[maximum]
    min_players = players[minimum]
    if max_players != min_players:
        return False

    pairs = {}
    for row in a:
        for group in row:
            for i in range(len(group)-1):
                for j in range(i+1, len(group)):
                    p = tuple(sorted(group[i] + group[j]))
                    if pairs.get(p) != None:
                        pairs[p] += 1
                    else:
                        pairs[p] = 1


    maximum = max(pairs, key=pairs.get)
    minimum = min(pairs, key=pairs.get)
    max_pairs = pairs[maximum]
    min_pairs = pairs[minimum]
    if min_pairs != max_pairs:
        return False



    p  = [x for x in players]
    if counter != min(groups) * min(days):
        return False


    return True
print(valid(s))

