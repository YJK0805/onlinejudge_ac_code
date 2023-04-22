a,b = map(int,input().split())
n = int(input())
ans = 0
for i in range(n):
	ca = 0
	cb = 0
	num = [int(x) for x in input().split()]
	for i in num:
		if i == a:
			ca += 1
		if i == -a:
			ca -= 1
		if i == b:
			cb += 1
		if i == -b:
			cb -= 1
	if ca and cb:
		ans += 1
print(ans)