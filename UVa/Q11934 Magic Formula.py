while 1:
	try:
		a,b,c,d,l = map(int,input().split())
		if a or b or c or d or l:
			ans = 0
			for i in range(l + 1):
				ans += ((a * (i ** 2) + b * i + c) % d == 0)
			print(ans)
		else:
			break
	except:
		break