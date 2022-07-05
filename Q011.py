# 2022-07-05

n, m = map(int, input().split())

barber = {}

for i in range(n):
    t1, t2 = input().split()
    barber[t1] = t2
bozS = input().split()

ans = []
for i in range(m):
    if bozS[i] in barber.keys():
        ans.append(barber[bozS[i]] + ' kachal!')
    else:
        ans.append('kachal!')

print(' '.join(ans))
