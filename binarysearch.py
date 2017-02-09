print("Enter the size of the array \n")
size=int(raw_input())
array=[]
print("Enter values")
for i in range(0,size):
	array=int(raw_input())
print("Enter element you want to find")
elm=int(raw_input())
high=0
low=0
mid=high+low/2
if array[mid]==elm:
	print("Element found")

elif array[mid]>elm:
	low=mid+1
else:
	high=mid-1
