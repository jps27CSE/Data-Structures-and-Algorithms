n=int(input("Enter number of elements:"))

count=0

list=[]

for i in range(0,n):
    elements=int(input())

    list.append(elements)


search=int(input("Enter the number you want to search:"))

for i in range(0,n):
    if list[i]==search:
        print("number is present at index:",i+1)
        count=count+1

if (count==0):
    print("error")
else:
    print(f"{search} is present {count} times in the array")