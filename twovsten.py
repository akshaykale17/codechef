t=int(input())
q=0
while q<t:
    x=int(input())
    if x%5==0:
        final=0
        while x%10!=0:
            x=x*2
            final+=1
        print(final)
    else:
        print("-1")
    q+=1
