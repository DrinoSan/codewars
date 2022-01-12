def order_(sentence):
    if len(sentence) == 0:
        return
    splitted_sentence = sentence.split(" ")
    sequence = []
    for i in range(len(splitted_sentence)):
        [sequence.append(int(c)) for c in splitted_sentence[i] if c.isdigit()]

    res = ["x" for x in range(len(splitted_sentence))]
    for x in range(1, len(sequence)+1):
        res[x-1] = splitted_sentence[sequence.index(x)]
    #print(" ".join(splitted_sentence))
    return " ".join(splitted_sentence)

def order(words):
    """
    The first number in strings in this list
    a = ['2is', '1This', '4Test', '3a']
    is a very powerful feature for comparison these strings!
    No matter that '2is shorter than '1This' and '1This' starts with big letter and '2is start with small letter.
    sorted() function will compare these strings using number 2 and number 1 only becuase they are both at the beginning of the strings (which are in the list)
    """
    print(sorted(sorted(words.split()[0])))
    return ' '.join(sorted(words.split(), key=lambda w: sorted(w)))



if __name__ == '__main__':
    order("is2 Thi1s T4est 3a")


