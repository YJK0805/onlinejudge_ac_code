from sys import stdin
for read in stdin:
	n = int(read)
	if n % 4 == 0 and (n % 400 == 0 or n % 100 != 0):
		print("閏年")
	else:
		print("平年")