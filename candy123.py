t=int(input())
q=0
while q<t:
    lf,bf=[int(x) for x in input().split()]
    ltot=0
    btot=0
    i=1
    while True:
        if ltot>lf:
            print("Bob")
            break
        if btot>bf:
            print("Limak")
            break
        ltot=ltot+i
        i=i+1
        btot=btot+i
        i=i+1
    q+=1
