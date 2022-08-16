s=input("Enter string: ")
ss=''
for i in s:
    if i not in "[{}]~`!@#$%^&*()_+-=\';/.,?": ss+=i

print(ss)
