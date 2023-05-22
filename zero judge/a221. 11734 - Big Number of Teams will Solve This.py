n = int(input())
for i in range(n):
	s = input()
	check = input()
	if len(s) == len(check):
		if s == check:
			print(f'Case {i + 1}: Yes')
		else:
			print(f'Case {i + 1}: Wrong Answer')
	else:
		s = s.split()
		if ''.join(s) == check:
			print(f'Case {i + 1}: Output Format Error')
		else:
			print(f'Case {i + 1}: Wrong Answer')