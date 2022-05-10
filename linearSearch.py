array = []
for _ in range(int(input("How many elements you want in your array\n"))):
    array.append(int(input()))
element = int(input("Enter an element that you want to find in your array\n"))
def linearSearch(arr,ele):
    for i in arr:
        if(i == ele):
            return i 
    return -1

# get the index of a given element
searchIndex = linearSearch(array,element)

if(searchIndex):
    print(f"Your {element} is at {searchIndex}\n")
else:
    print(f"{element} is not present in your array\n")
