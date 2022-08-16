s=input("Enter a string: ")
l={i:a for i,a in enumerate(s) if (a.isupper())}
print(l)
print(len(l))
