t=int(input())
q=0

while q<t:
    x=input()
    y=input()
    que=0
    min=0
    i=0
    while i<len(x):
        if x[i]=='?' or y[i]=='?':
            que+=1
        else:
            if x[i]!=y[i]:
                min=min+1
        i+=1
    print(min,end=" ")
    print(min+que)
    q+=1
