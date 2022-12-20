nums = [1, 2, 13, 2, 1, 13]
sum_all = 0
i = 0
while(i<len(nums)):
    if nums[i] == 13 :
        i=i+1
    else:
        sum_all += nums[i]
    i=i+1
print(sum_all)
