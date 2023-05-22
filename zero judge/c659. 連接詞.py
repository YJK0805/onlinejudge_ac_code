ss = [x for x in input().split()]
print(ss[1],end='')
for i in ss[2:]:
	print(f' {ss[0]} {i}',end='')