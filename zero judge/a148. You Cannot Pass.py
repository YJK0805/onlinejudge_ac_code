from sys import stdin
for read in stdin:
	arr = [int(x) for x in read.split()]
	if sum(arr[1:]) / (len(arr) - 1) > 59:
		print("no")
	else:
		print("yes")