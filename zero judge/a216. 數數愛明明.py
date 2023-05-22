from sys import stdin
f = [0,1]
g = [0,1]
for i in range(2,30010,1):
	f.append(i + f[i - 1])
	g.append(f[i] + g[i - 1])
for read in stdin:
	n = int(read)
	print(f[n],g[n])