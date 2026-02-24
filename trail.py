x = input("Enter the 1st name") 
y = input("Enter the 2nd name")
x1 = x.lower()
y1 = y.lower()
z = x1 + y1
total=0
for char in z:
    total += ord(char)

print(z)