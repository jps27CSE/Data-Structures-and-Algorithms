array=[1,4,6,8,9,11,14,15,20,25,33,83,87,97,99,100]

left=0
right=15 #Index length,,,(n-1)

search=1

while left <= right:
    mid=(left+right)//2 

    if search==array[mid]:
        break
    if search < array[mid]:
        right=mid-1
    else:
        left=mid+1

if left>right:
    print("not found")

else:
    print(f"{array[mid]} is found in the array .It is the {mid+1} th element of the array\n")



