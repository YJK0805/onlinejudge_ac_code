n = int(input())
for i in range(n):
	num = int(input())
	num += int(str(num)[::-1])
	times = 1
	while 1:
		num2 = int(str(num)[::-1])
		if num == num2:
			break
		num += num2
		times += 1
	print(times,num)