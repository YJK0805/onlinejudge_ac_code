n,m,k = map(int,input().split())
bomb = [[0] * m for i in range(n)]
monster = []
for i in range(k):
	monster.append([int(x) for x in input().split()])
while len(monster) > 0:
	temp = []
	for i in monster:
		if bomb[i[0]][i[1]]:
			bomb[i[0]][i[1]] = -1
		else:
			temp.append(i)
	monster,temp = temp,monster
	for i in range(n):
		for j in range(m):
			if bomb[i][j] == -1:
				bomb[i][j] = 0
	temp = []
	for i in monster:
		bomb[i[0]][i[1]] = 1
		i[0] += i[2]
		i[1] += i[3]
		if 0 <= i[0] < n and 0 <= i[1] < m:
			temp.append(i)
	monster,temp = temp,monster
ans = sum(bomb[i][j] for i in range(n) for j in range(m))
print(ans)