d = {'A':1,'B':10,'C':19,'D':28,'E':37,'F':46,'G':55,'H':64,'I':39,'J':73,'K':82,'L':2,'M':11,'N':20,'O':48,'P':29,'Q':38,'R':47,'S':56,'T':65,'U':74,'V':83,'W':21,'X':3,'Y':12,'Z':30}
s = input()
ans = d[s[0]]
for i in range(1,9):
	ans += int(s[i]) * (9 - i)
ans = (ans + int(s[-1])) % 10
print('fake' if ans else 'real')