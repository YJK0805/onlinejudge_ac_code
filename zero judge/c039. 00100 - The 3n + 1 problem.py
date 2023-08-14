from functools import lru_cache
@lru_cache(maxsize=None)
def f(n):
	count = 1
	while n != 1:
		n = (3 * n + 1) if n % 2 else n / 2
		count += 1
	return count
while 1:
	try:
		n,m = map(int,input().split())
		ans = 0
		for i in range(min(n,m),max(n,m) + 1,1):
			ans = max(ans,f(i))
		print(n,m,ans)
	except:
		break