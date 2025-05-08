'''
Problem Statement: Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.

Example 1:
Input: [1,2,4,7,7,5]
Output: Second Smallest : 2
	    Second Largest : 5
Explanation: The elements are as follows 1,2,3,5,7,7 and hence second largest of these is 5 and second smallest is 2
'''
class Solution:
    def Solv(self,list):
        largest=list[0]
        smallest=list[0]
        for i in list:
            if i>largest:
                largest=i
            if i<smallest:
                smallest=i
        print(largest,'\t',smallest)
        sec_largest=float('-inf')
        sec_smallest=float('inf')
        for i in list:
            if i>sec_largest and i<largest:
                sec_largest=i
            if i<sec_smallest and i>smallest:
                sec_smallest=i
        print(sec_largest,'\t',sec_smallest)
list=[1,2,3,7,7,5]
sl=Solution()
sl.Solv(list)
