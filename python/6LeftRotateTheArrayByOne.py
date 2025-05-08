class Solution:
    def solv(self,list,size):
        store=[]
        for i in range(1,size-1):
            store.append(list[i])
        store.append(list[0])
        print(store)
list=[1,2,3,4,5]
sl=Solution()
sl.solv(list,len(list))