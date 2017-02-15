

def binarySearch(array, elm):
	first=0
	last=len(array)-1
	found=False

	while first<=last and not found:
		mid=(first+last)//2
		if array[mid] == elm:
			print("Element found")
			found = True
		elif elm < array[mid]:
			last=mid-1
		else:
			first = mid+1
	return found
testlist = [0, 1, 2, 8, 13, 17, 19, 32, 42]
print(binarySearch(testlist, 3))
print(binarySearch(testlist, 13))





