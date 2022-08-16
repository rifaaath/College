class acc:
    def __init__(self, ac, amt):
        self.ano = ac
        self.__bal = amt
    def getbal(self):
        print("Balance: "+str(self.__bal))
    def deposit(self, amt):
        self.__bal+=amt
        self.getbal()
    def withdraw(self, amt):
        if amt>self.__bal:
            print("Error")
        else:
            self.__bal -= amt
            self.getbal()

n=int(input("Enter no of users: "))
d = {}
for i in range(n):
    a=input("Enter acc no.: ")
    if d.get(a):
        print("Error!")
        continue
    b=int(input("Enter amount.: "))
    d[a]=acc(a,b)

print("Accounts added!")
while(True):
    ac = input("Enter ac no: ")
    if not d.get(ac):
        print("No acc exists!")
        continue
    ch = int(input("1. Withdraw 2.Deposit 3.Balance"))
    
    if ch==1:
        amt = int(input("Enter amt: "))
        d[ac].withdraw(amt)
        
    elif ch==2:
        amt = int(input("Enter amt: "))
        d[ac].deposit(amt)
    elif ch==3:
        d[ac].getbal()
    else:
        break

print(d)
          
    
