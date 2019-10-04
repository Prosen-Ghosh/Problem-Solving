def add_letters(*letters):
    return chr(122 - sum(122 - ord(l) for l in letters) % 26)