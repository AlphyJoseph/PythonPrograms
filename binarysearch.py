
#print("Enter the size of the array \n")
#size=int(raw_input())
#array=[]
#high=size-1
#low=0
#found=False
#print("Enter values")
#for i in range(0,size):
#	array=int(raw_input())
#print("Enter element you want to find")
#elm=int(raw_input())
#while low<=high and not found:
#	mid=high+low//2
#	if array[mid]==elm:
#		print("Element found")
#		found=True
#	elif array[mid]>elm:
#		low=mid+1
#	else:
#		high=mid-1
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





