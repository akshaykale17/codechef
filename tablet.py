t=int(input())
q=0
while q<t:
    n,b=[int(z) for z in input().split()]
    farea=0
    for w in range(n):
        x,y,z=[int(r) for r in input().split()]
        if z<=b:
            if farea<(x*y):
                farea=x*y
    if farea!=0:
        print(farea)
    else:
        print("no tablet")
    q=q+1
