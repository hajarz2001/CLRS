def insertionSort(a):
    for j in range(1,len(a)):
        key=a[j]
        i=j-1
        while i>=0 and a[i]> key:
            a[i+1]=a[i]
            i=i-1
        a[i+1]=key
    return a

#insertionSort in descending order

def insertionSortDescend(a):
    for j in range(1,len(a)):
        key2=a[j]
        i=j-1
        while i>=0 and a[i]< key2:
            a[i+1]=a[i]
            i=i-1
        a[i+1]=key2
    return a        
        

a=[31,41,59,26,41,58]
print("Ascending order: " , insertionSort(a))
print("Descending order: ", insertionSortDescend(a))
