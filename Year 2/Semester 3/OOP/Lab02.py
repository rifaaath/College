def fib(n):
    if n==1:
        return[0]
    elif n==2:
        return[0,1]
    else:
        s=fib(n-1)
        s.append(sum(s[:-3:-1]))
        return s

a = int(input("Enter no: "))
print(fib(a))
