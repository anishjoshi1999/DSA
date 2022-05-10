# for binarySearch you need a sorted array
array = []
# element must be in sorted order
for i in range(int(input("How many element you want in you array?\n"))):
    array.append(int(input(f"Enter element number {i+1} in your array\n")))
element = int(input("Which element you want to find in your array\n"))
# sort your array as binarySearch need a sorted array to perform binary operation
array.sort()
def BinarySearch(arr,ele):
    low = 0
    high = len(arr) - 1
    # iterate until low and high value converges
    while low <= high:
        mid = int((low + high) / 2)
        if(arr[mid] == ele):
            return mid
        if(ele < arr[mid]):
            high = mid - 1
        else:
            low = mid + 1
    return -1
# get the index of an element 
searchIndex = BinarySearch(array,element)
if(searchIndex):
    print(f"{element} is at {searchIndex}\n")
else:
    print(f"{element} is not found in your array\n")

