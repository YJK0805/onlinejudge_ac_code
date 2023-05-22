from sys import stdin
num = []
for read in stdin:
	num.append([int(x) for x in read.split()])
print(num[0][len(num[0]) // 2])