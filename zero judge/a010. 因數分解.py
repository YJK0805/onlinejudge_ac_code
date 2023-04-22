n = int(input())
if n == 1:
	print(1)
f = 0
while n != 1:
	for i in range(2,n + 1):
		if n == 1:
			break
		count = 0
		while n % i == 0:
			count += 1
			n /= i;
		if count >= 1:
			if f:
				print(" * ",end='')
			f = 1
			if count == 1:
				print(i,end='')
			else:
				print("{}^{}".format(i,count),end='')