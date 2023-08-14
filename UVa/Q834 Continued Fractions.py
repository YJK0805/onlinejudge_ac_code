while 1:
	try:
		n,m = map(int,input().split())
		ans = []
		while n % m:
			ans.append(n // m)
			n,m = m,n % m
		ans.append(n // m)
		print(f'[{ans[0]};{ans[1]}',end='')
		for i in range(2,len(ans)):
			print(f',{ans[i]}',end='')
		print("]")
	except:
		break