score = [[0] * 4 for i in range(4)]
for i in range(4):
	score[i] = [int(x) for x in input().split()]
home = 0
guest = 0
for i in range(0,4,2):
	if sum(score[i]) > sum(score[i + 1]):
		home += 1
	else:
		guest += 1
print("{}:{}\n{}:{}".format(sum(score[0]),sum(score[1]),sum(score[2]),sum(score[3])))
if home > guest:
	print("Win")
elif home < guest:
	print("Lose")
else:
	print("Tie")