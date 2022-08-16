keyfile=open("keys.txt",'r')
ansfile=open("marks.txt",'r')

for line in keyfile:
    key=line.split()

marks=[]
for line in ansfile:
    m=0
    ans=line.split()
    for i in range(10):
        if ans[i+1]==key[i]:
            m+=1
    marks.append(m)

c=0
for i in marks:
    print("student ",c,": ",i)
    c+=1

print("max: student ",marks.index(max(marks)),"score: ",max(marks))
