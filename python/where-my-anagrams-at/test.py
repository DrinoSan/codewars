def anagrams(word, words):
    res = [w for w in words if sorted(word) == sorted(w)]
    return res




print(anagrams('abba', ['aabb', 'abcd', 'bbaa', 'dada']))
