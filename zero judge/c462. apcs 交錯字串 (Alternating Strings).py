def isupper(c):
	if c >= "A" and c <= "Z":
		return 1
	return 0
k = int(input())
s = input()
bac = -1
cur = 0
ans = 0
seg = 0
for c in s:
	sta = isupper(c)
	if sta == bac:
		cur += 1
	else:
		bac = sta
		if cur < k:
			seg = 0
		cur = 1
	if cur == k:
		seg += k
	if cur > k:
		seg = k
		cur = k
	ans = max(ans,seg)
print(ans)