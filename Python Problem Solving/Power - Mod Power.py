def casting(n):
    if n in '.':
        return float(n)
    else:
        return int(n)


a = int(input())
b = int(input())
m = int(input())
x = a ** b
print(x)
print(x % m)
