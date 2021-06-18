# 2021-06-18
r, c = map(int, input().split())

if 1<=c<=10:
    
    print('Right', 11-r, c)
    
else:
    print('Left', 11-r, 21-c)

