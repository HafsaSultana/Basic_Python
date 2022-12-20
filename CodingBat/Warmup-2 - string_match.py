a='abc'
b= 'abc'
len_a=len(a)
len_b=len(b)
if len_a<len_b:
    sml_len=len_a
else:
    sml_len=len_b
match=0
j=1
for i in range(1,sml_len):
    if a[i]==b[j] and a[i-1]==b[j-1]:
        match+=1
        #b=b.replace(b[j],'')
        #print(a[i-1],a[i],"   ",b[j-1],b[j])
    j=j+1
print(match)