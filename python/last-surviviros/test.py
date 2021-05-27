def last_surivors(string):
    
    i = 0
    while True:
        string = sorted(string)
        string = "".join(string)
        print(string)
        if len(string) == 1:
            return string
        elif string[i] == string[i+1]:
            if ord(string[i]) == 122:
                string = string.replace(string[i]+string[i], chr(97))
                i = 0
                continue
            else:
                string = string.replace(string[i]+string[i], chr(ord(string[i])+1))
                i = 0
                continue
        elif len(string)-2 > i:
            i+=1
        else:
            return string










print(last_surivors("abzz"))


