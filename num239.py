t=int(input())
q=0
while q<t:
    x,y=[int(z) for z in input().split()]
    final=0
    for z in range(x,y+1):
        if z%10==2 or z%10==3 or z%10==9:
            final+=1
    print(final)
    q+=1
