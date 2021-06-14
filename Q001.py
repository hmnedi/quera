n = int(input())
l = list(map(int, input().split()))

mini = 0
mini_index = 1
l.sort()
for i in range(len(l)):
    if l.count(l[i]) != 0:
        mini = l.count(l[i])
        mini_index = l[i]
        break

#print(mini, mini_index)

for i in range(len(l)):
    if l.count(l[i]) < mini and l.count(l[i])!=0:
        mini = l.count(l[i])
        mini_index = l[i]

print(mini_index)

