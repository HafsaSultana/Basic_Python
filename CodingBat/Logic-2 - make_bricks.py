# make_bricks(3, 1, 8)	True
# make_bricks(3, 1, 9)	False
# make_bricks(3, 2, 10)	True
# make_bricks(3, 2, 8)	True
# make_bricks(3, 2, 9)	True
# make_bricks(6, 1, 11)	True
# make_bricks(6, 0, 11)	False
# make_bricks(1, 4, 11)	True
# make_bricks(0, 3, 10)	True
# make_bricks(1, 4, 12)	True
# make_bricks(3, 1, 7)	True
# make_bricks(1, 1, 7)	False
# make_bricks(2, 1, 7)	True
# make_bricks(7, 1, 11)	True
# make_bricks(7, 1, 8)	True
# make_bricks(7, 1, 13)	False
# make_bricks(43, 1, 46)	True
# make_bricks(40, 1, 46)	False
# make_bricks(40, 2, 47)	True
# make_bricks(40, 2, 50)	True
# make_bricks(40, 2, 52)	False
# make_bricks(22, 2, 33)	False
# make_bricks(0, 2, 10)	True
# make_bricks(1000000, 1000, 1000100)	True
# make_bricks(2, 1000000, 100003)	True
# make_bricks(20, 0, 19)	True
# make_bricks(20, 0, 21)	False
# make_bricks(20, 4, 51)	False
# make_bricks(20, 4, 39)	True

def make_bricks(small, big, goal):
    if big == 0 and small >= goal:
        return True

    div5 = goal // 5
    if div5 > big:
        div5 = big

    if div5 * 5 + small >= goal:
        return True
    else:
        return False


print (make_bricks(43, 1, 43))
