def bubble(l):
    for i in range(0,len(l)-1):
        for j in range(0,len(l)-i-1):
            if l[j]>l[j+1]:
                l[j],l[j+1] = l[j+1],l[j]
    print(l)

l=[]
l=list(map(int,input("enter the elements").split()))
bubble(l)
