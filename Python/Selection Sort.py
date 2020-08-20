def selection_sort(array,size):
    for step in range(size):
        min_idx=step

        for i in range(step+1,size):
            if array[i]<array[min_idx]:
                min_idx=i

        (array[step],array[min_idx])=(array[min_idx],array[step])


data=[100,-2,45,20,15,78,65]

size=len(data)

selection_sort(data,size)

print(data)