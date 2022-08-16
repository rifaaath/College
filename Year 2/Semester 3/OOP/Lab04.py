from math import sqrt

a=int(input("Enter values for a,b,c: "))
b = int(input())
c=int(input())

if(a==0):
    print("Eqn is not quadratic")
else:
    d=(b*b)-(4*a*c)
    if(d==0):
        r=-b/(2*a)
        print("Roots are real and equal: {},{}".format(r,r))
    elif d>0:
        r1=(-b+sqrt(d))/(2*a)
        r2=(-b-sqrt(d))/(2*a)
        print("Roots are real and distinct: {},{}".format(r1,r2))
    else:
        r=-b/(2*a)
        i = sqrt(d)/(2*a)
        print("Roots are real and imaginary: {}+{}j".format(r,i))
