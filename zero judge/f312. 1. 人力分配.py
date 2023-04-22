a1,b1,c1 = map(int,input().split())
a2,b2,c2 = map(int,input().split())
n = int(input()) 
for i in range(n + 1):
	x = n - i
	y1 = a1 * i ** 2 + b1 * i + c1
	y2 = a2 * x ** 2 + b2 * x + c2
	if i == 0:
		ans = y1 + y2
	else:
		ans = max(ans,y1 + y2)
print(ans)