import math
t = int(input())
for i in range(t):
	a = int(input())
	b = int(input())
	ans = 0
	for j in range(a,b + 1,1):
		if int(math.sqrt(j)) ** 2 == j:
			ans += j;
	print("Case {}: {}".format(i + 1,ans))