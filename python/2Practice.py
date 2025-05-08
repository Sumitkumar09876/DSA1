'''
Q2.Write a program to calculate and return the sum of distances between the adjacent number in an
array of positive integers.
Note : You are expected to write code in the findTotalDistance function only which receive the first
parameter as the numbers of items in the array and second paramter as the array itself. You are not
required to take the input from the console.
Example Finding the total distance between adjacent items of a list of 5 numbers.
Input 1 : 5
input 2 : 10 11 7 12 14
Output 12
'''
class Solution:
    def solv(self,size,list):
        store=0
        for i in range(size-1):
            store+=abs(list[i]-list[i+1])
        return store
list=[10,11,7,12,14]
sl=Solution()
size=len(list)
print(sl.solv(size,list))