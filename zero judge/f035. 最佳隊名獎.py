s = input()
print(ord(s[0]),end='')
for i in range(1,len(s)):
	print("_",end='')
	print(ord(s[i]),end='')