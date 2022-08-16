def count(name):
    file=open(name,'r')
    nl=nw=nc=0
    for line in file:
        line=line.strip('\n')
        words=line.split()
        nl+=1
        nw+=len(words)
        nc+=len(line)

    file.close()
    print("lines: ",nl,"words: ",nw,"characters: ",nc)
n=input("enter file name: ")
count(n)
