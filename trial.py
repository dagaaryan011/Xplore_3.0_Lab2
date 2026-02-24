n = int(input("enter a number: "))
f = 1
for i in range(1,n+1):
    f *= i
print("factorial of" ,n, "is ", f)
print("program khtm")

def fact(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * fact(n-1)
print("factorial of" ,n, "using recursion is ", fact(n))