
# def f(iterable, integer):
    # length = len(iterable)
    # if length > integer:
        # return length
    # else:
        # return 0


#The above func is == to bellow
f=lambda t,i:[0,t:=len(t)][t>i]





print(f("abc",2))
