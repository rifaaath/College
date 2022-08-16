class rect:
    def __init__(self, w, h):
        self.__w = w
        self.__h = h
    def getarea(self):
        return self.__w * self.__h

a=rect(10,30)
print(a.getarea())
