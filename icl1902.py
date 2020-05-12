from math import pow
t=int(input())
q=0
while q<t:
    x=int(input())
    f=0
    while x!=0:
        i=1
        while x>=pow(i,2):
            i=i+1
        f=f+1
        x=x-int(pow(i-1,2))
    print(f)
    q=q+1
