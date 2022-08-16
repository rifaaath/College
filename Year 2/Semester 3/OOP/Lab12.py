from statistics import mean

n=int(input("Enter no of students: "))
l=[int(input("Marks Std %d: "%(i+1))) for i in range(n)]
l1=sorted(l,reverse=True)
print("Top 3 scores: %d %d %d"%(l1[0],l1[1],l1[2]))
print("Average: %d"%mean(l1))
