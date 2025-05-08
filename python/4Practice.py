'''
An algorthim to remove all the duplicate numbers of the list so that the list contains
only distinct numbers in the same order as they appear in the input list
Input
The first line of the input consists of an integer size, representing the number of elements in
the list (N). The second line consists of N space- separated integers - arr[Ol,
arr[ll.........., arr[N-11 representing the list of positive integers.
Output
Print space-separated integers representing the distinct elements obtained by removing all
the duplicate elements from the given list.
Input : 8
Input: 11321454
Output
13245
'''
class Solution:
    def solv(self,list):
        store=set()
        for i in list:
            store.add(i)
        print(store)
list=[1,1,3,2,1,4,5,4]
sl=Solution()
sl.solv(list)