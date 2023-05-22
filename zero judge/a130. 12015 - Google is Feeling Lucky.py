n = int(input())
for times in range(n):
	print(f'Case #{times + 1}:')
	web = []
	score = []
	ma = 0
	for i in range(10):
		a,b = input().split()
		ma = max(ma,int(b))
		web.append(a)
		score.append(int(b))
	for i in range(10):
		if score[i] == ma:
			print(web[i])