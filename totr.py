import re
x,y=input().split()
x=int(x)
i=0
while i<x:
    z=input()
    c=0
    while c<len(z):
        if z[c]=="_":
            print(" ",end="")
        elif re.search("[A-Z]",z[c]):
            temp=ord(z[c])-65
            print(y[temp].upper(),end="")
        elif re.search("[a-z]",z[c]):
            temp=ord(z[c])-97
            print(y[temp],end="")
        else:
            print(z[c],end="")
        c+=1
    i+=1
