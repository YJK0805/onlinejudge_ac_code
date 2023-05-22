from sys import stdin
for read in stdin:
    n = int(read)
    if n == 0:
        break
    else:
        s = list(map(int, input().split()))
        print(*sorted(s,key = lambda x : (x % 10,-x)))