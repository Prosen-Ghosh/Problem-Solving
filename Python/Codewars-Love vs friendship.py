def words_to_marks(s):
    return sum([ord(l) - 96 for l in s])