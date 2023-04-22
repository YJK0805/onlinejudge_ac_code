count = 1
while 1:
	s = int(input())
	if s < 0:
		break
	end = [int(x) for x in input().split()]
	need = [int(x) for x in input().split()]
	print("Case {}:".format(count))
	for i in range(12):
		if s >= need[i]:
			print("No problem! :D")
			s -= need[i]
		else:
			print("No problem. :(")
		s += end[i]
	count += 1