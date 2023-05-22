from sys import stdin
for read in stdin:
	n = int(read)
	count = 1
	for i in range(1,n + 1,1):
		count *= i
	ans = 0
	while count > 0:
		ans += (count % 10)
		count //= 10
	print(ans)