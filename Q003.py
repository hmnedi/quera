# 2021-03-10
a, b, c = map(int, input().split())

alist = []
blist = []
for i in range(1, a+1):
    if a%i == 0:
        alist.append(i)

for i in range(1, b+1):
    if b%i == 0:
        blist.append(i)

ans = 0
for i in range(len(alist)):
    for j in range(len(blist)):
        if alist[i] + blist[j] <= c:
            ans += 1

print(ans)
