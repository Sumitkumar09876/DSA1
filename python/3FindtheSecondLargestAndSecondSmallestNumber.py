'''
Problem Statement: Given an array of size n, write a program to check if the given array is sorted in (ascending / Increasing / Non-decreasing) order or not. If the array is sorted then return True, Else return False.

Example 1:
Input: N = 5, array[] = {1,2,3,4,5}
Output: True.
Explanation: The given array is sorted i.e Every element in the array is smaller than or equals to its next values, So the answer is True.
'''
class Solution:
    def solv(self,list,size):
        for i in range(size-1):
            if list[i]>list[i+1]:
                return False
        return True
list=[3,4,5,1,2]
sl=Solution()
if sl.solv(list,len(list)):
    print('True')
else:
    print('False')