t=int(input())
q=0
while q<t:
    tot=int(input())
    x=input()
    x1=x.split(" ")
    i=0
    temp=0
    while i<len(x1):
        x1[i]=int(x1[i])
        i+=1
    temp=0
    while True:
        flag=0
        i=0
        while i<len(x1):
            if x1[i]<=temp:
                 flag=1
                 temp=temp+1
                 del x1[i]
            i=i+1
        if flag==0:
            break
    print(temp)
    q=q+1
