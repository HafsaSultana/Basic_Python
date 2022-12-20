nums=[1,2,3]
if len(nums)>2:
    for i in range(0,len(nums)-2):
        if nums[i]==1 and nums[i+1]==2 and nums[i+2]==3:

            result = True
            break
        else:
            result = False
else:
    result = False
print( result)