c = 0
while 1:
	try:
		s = input()
		for i in s:
			if i == '"':
				c += 1
				print("``" if c % 2 else "''",end='')
			else:
				print(i,end='')
		print()
	except:
		break