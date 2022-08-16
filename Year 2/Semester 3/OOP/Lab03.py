l  =list(map(int, input("Enter values: ").split()))
os=es=0
os+=sum(m for m in l if (m%2==0))
es+=sum(p for p in l if (p%2!=0))
print("Even sum: {}\tOdd Sum: {}".format(es,os))
