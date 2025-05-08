'''Problem Statement: Given an array, we have to find the largest element in the array.
Example 1:
Input: arr[] = {2,5,1,3,0};
Output: 5
Explanation: 5 is the largest element in the array. '''
class Solution:
    def solv(self,list):
        largest=list[0]
        for i in list:
            if i>largest:
                largest=i
        return largest
    
list=[2,5,1,3,0]
sl=Solution()
print(sl.solv(list))


