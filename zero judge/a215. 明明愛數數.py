from sys import stdin
for read in stdin:
	n,m = map(int,read.split())
	ans,count = 0,0
	while count <= m:
		count = count + ans + n
		ans += 1
	if ans == 0:
		ans += 1
	print(ans)