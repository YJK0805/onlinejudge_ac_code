n = int(input())
for i in range(n):
	arr = [[] * 7 for j in range(2)]
	for j in range(2):
		arr[j] = [int(x) for x in input().split()]
	f = 1
	if not((arr[0][1] != arr[0][3]) and (arr[1][1] != arr[1][3]) and (arr[0][1] == arr[0][5]) and (arr[1][1] == arr[1][5])):
		print("A",end='')
		f = 0
	if not(arr[0][6] == 1 and arr[1][6] == 0):
		print("B",end='')
		f = 0
	if not(arr[0][1] != arr[1][1] and arr[0][3] != arr[1][3] and arr[0][5] != arr[1][5]):
		print("C",end='')
		f = 0
	if f:
		print("None")
	else:
		print()