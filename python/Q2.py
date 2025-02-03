import numpy as np
sum=0
for i in range(100):
    if i%2!=0 and i%3!=0 and i%5!=0 and i%7!=0:
        print(i)
        sum=sum+i
print(sum)

class Solution:
    def solv(self,a,b):
        return a+b
sl=Solution()
a=int(input("Enter value of a:"))
b=int(input("Enter value of b:"))
print(sl.solv(a,b))