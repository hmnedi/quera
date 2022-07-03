# 2022-07-03

n, t, r = int(input()), input(), input()
res = 0
for i in range(n):
    if t[i] != r[i]:
       res += 1
print(res)
