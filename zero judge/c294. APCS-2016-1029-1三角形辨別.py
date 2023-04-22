arr = [int(i) for i in input().split()]
arr.sort()
for i in arr:
	print(i,end=' ')
if arr[0] + arr[1] <= arr[2]:
	print("\nNo")
elif arr[0] ** 2 + arr[1] ** 2 < arr[2] ** 2:
	print("\nObtuse")
elif arr[0] ** 2 + arr[1] ** 2 == arr[2] ** 2:
	print("\nRight")
elif arr[0] ** 2 + arr[1] ** 2 > arr[2] ** 2:
	print("\nAcute")