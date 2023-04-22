a,b,c = map(int,input().split())
a = min(a,1)
b = min(b,1)
if (a and b) == c:
	print("AND")
if (a or b) == c:
	print("OR")
if (a ^ b) == c:
	print("XOR")
if not((a and b) == c) and not((a or b) == c) and not((a ^ b) == c):
	print("IMPOSSIBLE")