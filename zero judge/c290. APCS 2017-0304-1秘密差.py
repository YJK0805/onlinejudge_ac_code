x = input()
a = 0
b = 0
for i in range(len(x)):
	if i % 2:
		a += int(x[i])
	else:
		b += int(x[i])
print(abs(a - b))