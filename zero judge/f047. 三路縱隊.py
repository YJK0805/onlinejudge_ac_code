s = input().split()
for i in range(3):
	for j in range(i,len(s),3):
		print(s[j] + ' ',end='')
	print()