t = int(input())
for i in range(t):
    cnt = [int(x) for x in input().split()]
    n = cnt[0]
    s = cnt[1:]
    for j in range(4,n,1):
        s.append(s[j - 4] + s[j - 1])
    s.sort()
    print(s[n // 2] if n % 2 else (s[n // 2] + s[n // 2 - 1]) // 2)