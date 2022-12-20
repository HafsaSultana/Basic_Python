str ='JavJavJav'
if len(str) < 3:
    front_3 = str+str+str
else:
    front = str[0:3]
    front_3 = front + front + front
print(front_3)

