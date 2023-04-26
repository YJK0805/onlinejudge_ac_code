from sys import stdin
for read in stdin:
	a,b = map(int,read.split())
	print(abs(a - b))