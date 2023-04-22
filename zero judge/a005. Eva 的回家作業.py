t = int(input())
while t:
	arr = [int(i) for i in input().split()]
	mode = 0
	if arr[1] - arr[0] == arr[2] - arr[1]:
		mode = 1
	for i in arr:
		print(i,end=' ')		
	if mode == 1:
		print(2 * arr[3] - arr[2])
	else:
		print(arr[3] * (arr[3] // arr[2]))
	t -= 1