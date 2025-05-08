print("Hello")

age=24
print(age)

name="Sumit"
print(name)

complex_number=4+32j
print(complex_number)
print(type(complex_number))

list=['apple','mango',1,2]
print(list)
print(type(list))

a=34
b=44
print(a+b)

print(a/b)
print(a//b)
print(5**2)

print(a>b)

x=True
y=False
print(x and y)
print(x or y)
print(not x)

num1=int(input('Enter first number\n'))
num2=float(input('Enter second number\n'))
num3,num4=input('Enter the two number separeted by space:\n').split()
num3=int(num3)
num4=int(num4)
print('Sum of Two numbers:',num1+num2)
print('Sum of third and fourth number:',num3+num4)

import numpy as np
arr=np.array([1,2,3,4])
print(arr[0])

if a>20:
    print('Yes')
else:
    print('No')