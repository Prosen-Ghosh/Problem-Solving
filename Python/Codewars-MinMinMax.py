def minMinMax(arr):
    sortedArr = sorted(arr)
    min = sortedArr[0]
    max = sortedArr[-1]
    minx = min + 1
    for e in sortedArr[1:-1]:
        if e == minx:
            minx = minx + 1
            continue
    return [min, minx, max]