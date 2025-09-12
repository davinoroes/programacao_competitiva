n = int(input())
xfinal = 0
yfinal = 0
zfinal = 0
for i in range(n):
    xi,yi,zi = map(int, input().split())
    xfinal += xi
    yfinal += yi
    zfinal += zi
if xfinal == 0 and yfinal == 0 and zfinal == 0:
    print('YES')
else:
    print('NO')