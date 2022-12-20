str='a'
length = len(str)
if length == 1:
    result = str
else:
    mid_str = str[1:length-1]
    result = (str[length-1]+mid_str+str[0])
print(result)