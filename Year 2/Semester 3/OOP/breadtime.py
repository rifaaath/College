class time:
    def __init__(self,hr,mins,sec):
        self.hr=hr
        self.mins=mins
        self.sec=sec

def addtime():
    global finhr
    finhr=crttime.hr+btime.hr
    global finmins
    finmins=crttime.mins+btime.mins
    global finsec
    finsec=crttime.sec+btime.sec
    while finhr>24:
            global d
            d=0
            d=d+1
            finhr=finhr-24
    while finsec>60:
        finsec=finsec-60
        finmins=finmins+1
    while finmins>60:
        finmins=finmins-60
        finhr=finhr+1
def printtime():
    thr=""
    tmins=""
    tsec=""
    td=""
    if len(str(finhr))==1:
        thr="0"+str(finhr)
    else:
        thr=str(finhr)
    if len(str(finmins))==1:
        tmins="0"+str(finmins)
    else:
        tmins=str(finmins)
    if len(str(finsec))==1:
        tsec="0"+str(finsec)
    else:
        tsec=str(finsec)
    if d>0:
        td=str(d)
        print("the bread will be done at:",td+" day and time:-"+thr+":"+tmins+":"+tsec)
    else:
        print("the bread will be done at:",thr+":"+tmins+":"+tsec)
        
        
print("Enter the current hour")
crthr=int(input("Hour:"))
crtmins=int(input("Minute:"))
crtsec=int(input("Second:"))
crttime=time(crthr,crtmins,crtsec)

print("Enter time required to make bread")
bhr=int(input("Hour:"))
bmins=int(input("minute:"))
bsec=int(input("second:"))
btime=time(bhr,bmins,bsec)

finalhour=0
finalminute=0
finalsecond=0

addtime()
printtime()
