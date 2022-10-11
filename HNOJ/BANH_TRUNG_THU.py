n, m = map(int, input().split())
a = input().split()
ans = 0
res = [int(i) for i in a]
res.sort()
for i in range(0, n):
    if (m > 0):
        m -= int(res[i])
        ans++;
        
while (m >= int(res[0])):
    m -= int(res[0])
    ans++;
    
print(ans)