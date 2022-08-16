from statistics import *

def count(name):
    file=open(name,'r')
    i=1
    for line in file:
        marks=list(map(int,line.split()))
        tot=sum(marks)
        avg=mean(marks)
        print("student: ",i," total: ",tot," average: ",avg)
        i+=1
    file.close()

n=input("enter file name: ")
count(n)
