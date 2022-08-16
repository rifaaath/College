def search(li,a):
    l=0
    h=len(li)
    while(l<=h):
        mid=(l+h)//2
        if a==li[mid]:
            return mid
        if a>li[mid]:
            l=mid+1
        else:
            h=mid-1

    return "No element found"

li=list(map(int,input("Enter sorted array: ").split()))
a=int(input("Enter element to search: "))
print(search(li,a))
