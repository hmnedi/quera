# 2021-06-15

t = int(input())
x = []
y = []
for i in range(t):
    a, b = map(int, input().split())
    x.append(a)
    y.append(b)


res = []

for j in range(t):
    cycle1 = 0
    cycle2 = 2
    for i in range(y[j]):
        if i%2==0:
            cycle1 += 1
            cycle2 += 1
        else:
            cycle1 += 3
            cycle2 += 3
    if x[j] == y[j]:
        print(cycle1)
    elif abs(x[j]-y[j]) == 2:
        print(cycle2)
    else:
        print(-1)
    
