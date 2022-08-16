from tkinter import *
from tkinter import messagebox
def Addition():
    a= float(T1.get())
    b =float(T2.get())
    sum = a + b
    messagebox.showinfo("result","Sum of Two Number is =%.2f"%sum)
def Substraction():
    a = float(T1.get())
    b =float(T2.get())
    sub = a - b
    messagebox.showinfo("result","Substraction of Two Number is =%.2f"%sub)

def Multplication():
    a = float(T1.get())
    b =float(T2.get())
    mul = a * b
    messagebox.showinfo("result","Multplication of Two Number is =%.2f"%mul)
def Division():
    a = float(T1.get())
    b =float(T2.get())
    if b == 0 :
        messagebox.showinfo("Result","Second Number Cant be zero, Cant Divide")
    else:
        div = a / b
    messagebox.showinfo("result", "Multplication of Two Number is =%.2f" % div)
window = Tk()
L1 = Label(window, text ="Enter Number One")
L2 = Label(window, text ="Enter Number two")
T1 = Entry(window, width =20)
T2 = Entry(window, width =20)
B1 = Button(window, text = "Add", command =Addition)
B2 = Button(window, text = "Substract",command =Substraction)
B3 = Button(window, text = "Multiply", command =Multplication)
B4 = Button(window, text = "Divide",command =Division)
L1.grid(row=0)
L2.grid(row=1)
T1.grid(row=0, column=1)
T2.grid(row=1, column=1)

B1.grid()
B2.grid()
B3.grid()
B4.grid()
window.mainloop()