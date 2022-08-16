n=int(input("Enter no of students: "))
l=[input("Enter name and marks  Std %d: "%(i+1)).split() for i in range(n)]
print(l)
