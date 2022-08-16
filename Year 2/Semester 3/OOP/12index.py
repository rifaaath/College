def indexof(l):
    return(l.index(min(l)))

l=[i for i in input("enter elements: ").split()]
print(l)
print("index of smallest is: ",indexof(l))
   
