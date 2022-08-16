from numpy import *
a=array(list(map(int,input("enter a: ").split())))
b=array(list(map(int,input("enter b: ").split())))
print(a,sign(a))
print(b,end='')
b[b>0],b[b<0]=1,-1
print(b)

