nums=[1, 2, 2, 2, 1, 13]
sum_all = 0
for i in range(1, len(nums)):
    if nums[i-1] == 2 and nums[i]==2:
        print(True)
    else:
        print(False)

print(sum_all)