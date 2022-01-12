def solution(string,markers):
    parts = string.split('\n')
    for s in markers:
        parts = [v.split(s)[0].rstrip() for v in parts]

    return '\n'.join(parts)


def solution_(string,markers):
    res = ""
    i = 0
    while i < len(string):
        if string[i] in markers:
            if i > 0 and string[i-1] == " ":
                res = res[:-1]
            while i < len(string) and string[i] != "\n":
                i = i + 1
        else:
            res = res + string[i]
            i = i + 1

    return res



if __name__ == '__main__':
    solution("apples, pears # and bananas\ngrapes\nbananas !apples", ["#", "!"])


