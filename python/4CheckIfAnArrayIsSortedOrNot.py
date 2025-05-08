class Solution:
    def solv(self,list,size):
        for i in range(size-1):
            if list[i]>list[i+1]:
                return False
        return True
list=[4,5,6,7,8][1,2,3,4]
sl=Solution()
if sl.solv(list,len(list)):
    print('Sorted')
else:
    print('Not Sorted')