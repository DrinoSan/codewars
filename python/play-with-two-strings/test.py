def work_on_strings(a,b):
    for _ in range(2):
        for i, c in enumerate(a.lower()):
            swap = a.lower().count(c)
            if swap % 2 != 0:
                for icc, cc in enumerate(b):
                    if cc == c and cc.isupper():
                        b = b[:icc] + b[icc].lower() + b[icc+1:]
                    elif cc == c and cc.islower():
                        b = b[:icc] + b[icc].upper() + b[icc+1:]
        a, b = b, a

    return a+b






work_on_strings("abc","cde")
