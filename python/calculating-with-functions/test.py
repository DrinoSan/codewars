# ops = {
        # "*": (lambda x,y: x*y),
        # "/": (lambda x,y: x/y),
        # "-": (lambda x,y: x-y),
        # "+": (lambda x,y: x+y)
    # }


# def zero(f=None): 
    # if f == None:
        # return 0
    # else:
        # res = ops.get(f[0])(0,f[1])
        # return res


# def one(f=None):
    # if f == None:
        # return 1
    # else:
        # res = ops.get(f[0])(1,f[1])
        # return res


# def two(f=None): 
    # if f == None:
        # return 2
    # else:
        # res = ops.get(f[0])(2,f[1])
        # return res


# def three(f=None):
    # if f == None:
        # return 3
    # else:
        # res = ops.get(f[0])(3,f[1])
        # return res


# def four(f=None):
    # if f == None:
        # return 4
    # else:
        # res = ops.get(f[0])(4,f[1])
        # return res


# def five(f=None):
    # if f == None:
        # return 5
    # else:
        # res = ops.get(f[0])(5,f[1])
        # return res


# def six(f=None):
    # if f == None:
        # return 6
    # else:
        # res = ops.get(f[0])(6,f[1])
        # return res


# def seven(f=None):
    # if f == None:
        # return 7
    # else:
        # res = ops.get(f[0])(7,f[1])
        # return res


# def eight(f=None):
    # if f == None:
        # return 8
    # else:
        # res = ops.get(f[0])(8,f[1])
        # return res


# def nine(f=None):
    # if f == None:
        # return 9
    # else:
        # res = ops.get(f[0])(9,f[1])
        # return res


# def plus(f):
    # return ["+", f]
# def minus(f):
    # return ["-", f]
# def times(f):
    # return ["*", f]
# def divided_by(f):
    # return ["/", f]





def zero(f = None): return 0 if not f else f(0)
def one(f = None): return 1 if not f else f(1)
def two(f = None): return 2 if not f else f(2)
def three(f = None): return 3 if not f else f(3)
def four(f = None): return 4 if not f else f(4)
def five(f = None): return 5 if not f else f(5)
def six(f = None): return 6 if not f else f(6)
def seven(f = None): return 7 if not f else f(7)
def eight(f = None): return 8 if not f else f(8)
def nine(f = None): return 9 if not f else f(9)

def plus(y): return lambda x: x+y
def minus(y): return lambda x: x-y
def times(y): return lambda  x: x*y
def divided_by(y): return lambda  x: x/y


# print(seven(times(five())))
import dis
print(dis.dis(five))
# print(plus(five()))





