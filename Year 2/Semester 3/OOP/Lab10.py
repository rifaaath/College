s=input("Enter string: ")
c=0
for i in s:
    if i in "AaEeIiOoUu":   c+=1
print(c)
