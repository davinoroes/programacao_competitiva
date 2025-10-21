t = int(input())
for i in range(t):
    n, m = map(int, input().split())
    blocos = list(map(int,input().split()))

    dp = [10**9] * (m+1)
    dp[0]= 0
    for c in range(1,m+1):
        for a in blocos:
            if c - a >= 0:
                dp[i] = min(dp[i], dp[c-a]+1)
    print(dp[m])
            