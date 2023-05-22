t = int(input())
fib = [0,1]
for i in range(2,50):
    fib.append(fib[i - 1] + fib[i - 2])
while t:
    n = int(input())
    ans,flag,t,num = "",False,t - 1,n
    for i in range(49,1,-1):
        if num >= fib[i]:
            ans += "1"
            num -= fib[i]
            flag = True
        elif flag:
            ans += "0"
    print(f'{n} = {ans} (fib)')