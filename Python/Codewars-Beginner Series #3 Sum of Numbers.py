def get_sum(a,b):
    return a if a == b else sum([x for x in range(min(a, b),max(a,b)+1)])