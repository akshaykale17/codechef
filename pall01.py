t=int(input())
q=0
while q<t:
    x=input()
    i=0
    j=len(x)-1
    flag=0
    while i<=(len(x)//2):
        if x[i]!=x[j]:
            flag=1
            break
        i+=1
        j-=1
    if flag==0:
        print("wins")
    else:
        print("losses")
    q+=1
