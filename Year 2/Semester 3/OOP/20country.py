l=[[],[],[]]

def ins():
    cname=input("Enter name: ")
    cap=input("enter capital: ")
    pop=int(input("population: "))
    l[0].append(cname)
    l[1].append(cap)
    l[2].append(pop)
    print("added")

def search():
    cname=input("enter name: ")
    flag=0
    for i in range(len(l[0])):
        if l[0][i]==cname:
            flag=1
            print("capital: ",l[1][i],"population: ",l[2][i])
            break
    if not flag:
        print("country not found")

def high():
    i=l[2].index(max(l[2]))
    print("country: ",l[0][i], "capital: ",l[1][i],"population: ",l[2][i])

while(1):
    ch=int(input("1.add 2.search 3.highest pop"))
    if ch==1:
        ins()
    elif ch==2:
        search()
    elif ch==3:
        high()
