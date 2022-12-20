def round10(n):
  if (n%10)<5:
    return n-(n%10)
  elif (n%10)>=5:
    return n+(10-n%10)
a=16
b=17
c=18
sum_abc = round10(a)+round10(b)+round10(c)
print(round10(a),sum_abc)