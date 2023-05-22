while 1:
	n = int(input())
	if n:
		a = format(n,'b')
		print(f'The parity of {a} is ',end='')
		ans = 0
		while n:
			ans += (n % 2)
			n //= 2
		print(f'{ans} (mod 2).')
	else:
		break