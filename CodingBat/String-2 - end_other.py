a='Hiabch'
b='abc'

a=a.lower()
b=b.lower()
length_a = len(a)
length_b = len(b)
small_str=''
result = 0
if length_a>length_b:
    small_str=a[length_a-length_b:length_a]
if small_str==b:
    result =1
else:
    small_str=b[length_b-length_a:length_b]
    if small_str==a:
      result =1
if result ==1:
    print(small_str, True)
else:
    print(small_str, False)