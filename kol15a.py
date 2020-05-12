import re
t=int(input())
q=0
while q<t:
    y=input()
    tot=0
    i=0
    while i<len(y):
        if re.search("[0-9]",y[i]):
            tot=tot+int(y[i])
        i+=1
    print(tot)
    q+=1
