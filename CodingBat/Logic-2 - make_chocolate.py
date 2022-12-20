def make_chocolate(small, big, goal):

    div5 = goal // 5
    if div5 > big:
        div5 = big
    res = goal - div5 * 5
    if res <= small:
        return res
    else:
        return -1


print (make_chocolate(4, 1, 9))
