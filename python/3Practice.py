'''
QI. Calculate Total Tax
Write a program to calculate the total bill tax amount for a list of billing amounts passed
as an array of long integers.
Up to the amount 1000, there is no tax applicable, subsequently, a flat tax of 10% is
applicable for the remaining amount as per the tax rate.
Note:
All calculations and results should be integer based ignoring fractions
You are expected to write code int the calcTotalTax function only which will receive the
first parameter as the number of items in the array and second parameter as the array
itself. You are not required to take input from the console.
Example
Calculating total tax for a list of 5 billing amount
Input
5
1000 2000 3000 4000 5000
Output
1000
'''
class Solution:
    def solv(self,num,list):
        store=0
        sum=0
        for i in list:
            if i==None:
                return 0
            elif i>1000:
                store=((i-1000)//100)*10
                sum+=store
        return sum
list=[1000,2000,3000,4000,5000]
sl=Solution()
print(sl.solv(len(list),list))