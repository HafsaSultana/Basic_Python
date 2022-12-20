n=5
str='hichghg'
front_3=''
if len(str)<3:
    front=str
else:
    front=str[0:3]
for i in range(0,n):
    front_3+=front
print( front_3)
