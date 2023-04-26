def Print_it_all(n):
	for i in range(n):
		if i > 0 and i % 7 != 0:
			print(i,end=' ')
	print()
while 1:
	n = int(input())
	if n == 0:
		break
	Print_it_all(n)