id = input("ID:")
bs = int(input("Basic Sal: "))
a = int(input("Allowance: "))
gs = bs+a

if(gs>20000):
    tax = 0.3*gs
elif(gs>10000):
    tax = 0.2*gs
elif(gs>5000):
    tax=0.1*gs
else:
    tax=0

ns = gs-tax
print("Gross salary: {}\tTax: {}\tNet salary: {}".format(gs,tax,ns))