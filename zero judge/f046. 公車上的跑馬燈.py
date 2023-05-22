w = int(input())
m = input()
t = int(input())
m = (w * " ") + m
t = t % len(m)
ans = m[t:t + w]
ans = ans + ((w - len(ans)) * " ")
print(ans)