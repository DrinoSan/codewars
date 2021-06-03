def valid_parentheses(string):
    
    stack = [c for c in string if c == "(" or c == ")"]
    print(stack)
    if len(stack) == 1:
        return False
    counter = 0
    for c in stack:
        if c == "(":
            counter += 1
        elif c == ")":
            counter -= 1
        
        if counter < 0:
            return False
    if counter != 0:
        return False

    return True
        






print(valid_parentheses("hi())("))
