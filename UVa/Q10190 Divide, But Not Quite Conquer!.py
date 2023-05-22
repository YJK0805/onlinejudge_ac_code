from sys import stdin
for read in stdin:
	n,m = map(int,read.split())
	ans,flag = [],True
	if n <= 1 or m <= 1 or n < m:
		flag = False
	else:
		while n != 1:
			ans.append(n)
			if n % m:
				flag = False
				break
			n //= m
	if flag:
		ans.append(1)
		print(*ans)
	else:
		print("Boring!")