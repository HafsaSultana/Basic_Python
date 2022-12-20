str = 'axxxaaxx'
str1 = str[0:len(str)-2]
str2 = str[len(str)-2:len(str)]
count=0
for i in range(1,len(str1)):
    if str1[i-1]==str2[0] and str1[i]==str2[1]:
        count+=1

print(str1,str2,count)

# str_list = []
# s=''
# count =1
# last_str=str[len(str)-2:len(str)]
# for i in range(0, len(str) - 2, 2):
#     s=str[i] + str[i + 1]
#     str_list.append(s)
# str_list.sort()
# str_list.remove(last_str)
# for i in range(1, len(str_list)):
#     if str_list[i-1]!=str_list[i] :
#         count+=1
# print(last_str,count,str_list)
