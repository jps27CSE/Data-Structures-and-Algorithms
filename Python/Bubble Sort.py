def BubleSort(array):

    for i in range (len(array)):
        for j in range (0,len(array)-i-1):
            if array[j]>array[j+1]:
                (array[j],array[j+1])=(array[j+1],array[j])

array=[43,1,6,-1,60,32]

BubleSort(array)

print("Sort:")
print(array)