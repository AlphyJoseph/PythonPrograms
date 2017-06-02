#!/bin/python
from sys import exit


a = raw_input().strip()
letter_list=["a","e","i","o","u","y"]
for i in range(0,len(a)-1):
    if a[i]==a[i+1]:
    	print("No")
    	exit()
	if any(a[i]==x for x in letter_list):
        if any(a[i+1]==x for x in letter_list):
                print("No")
                exit()
	else:
        continue
print("Yes")
    