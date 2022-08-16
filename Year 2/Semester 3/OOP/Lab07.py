s1=input("Enter string 1: ")
s2=input("Enter string 2: ")

s=s1+s2
q=''
for i in s:
    if i.isupper():
        q+=i
print(q)
