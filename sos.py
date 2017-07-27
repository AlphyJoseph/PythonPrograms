#send a message "SOS" multiple times and count the number of mistakes in the transmitted message
#Eg. SOSSOSSOT last T should be S hence, ans=1 (or)
#SOSFORSOSSDS F,R,D are mistakes. Message is always a multiple of 3
s=raw_input()
if len(s)%3 == 0 and len(s)<=99 :
	n = len(s)/3
	exp = "SOS"*n
for i in range(len(s)):
	if exp[i]! = s[i] :
		ans = ans +1
print ans