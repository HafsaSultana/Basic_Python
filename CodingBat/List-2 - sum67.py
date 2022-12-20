nums=[1, 2, 2, 7]
flag = 0
sum_all=0
for i in range(0, len(nums)):
    if nums[i] != 6 and flag==0:
        sum_all+=nums[i]
    elif nums[i] == 6 :
        flag = 1
    elif nums[i] == 7 and flag == 1:
        flag = 0
print(sum_all)


