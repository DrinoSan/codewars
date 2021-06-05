def recover(st): 
    d = {
        "ZERO": 0,
        "ONE": 1,
        "TWO": 2,
        "THREE": 3,
        "FOUR": 4,
        "FIVE": 5,
        "SIX": 6,
        "SEVEN": 7,
        "EIGHT": 8,
        "NINE": 9,
    }
    res = ""
    sorted_d = {"".join(sorted(k)): v for (k, v) in d.items()}
    for i in range(len(st)+1):
        for j in range(len(st)+1):
            if "".join(sorted(st[i:j])) in sorted_d.keys():
                res += str(sorted_d.get("".join(sorted(st[i:j]))))
                

    return res if len(res) != 0 else "No digits found"

 
recover("TWWTONE")
