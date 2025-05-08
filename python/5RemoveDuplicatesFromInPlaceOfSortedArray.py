class Solution:
    def solv(self,list):
        store=set()
        for i in list:
            store.add(i)
        result=list(store)
        print(' '.join(map(str, result)))
        print(store)
list=[1,1,2,2,2,3,3]
sl=Solution()
sl.solv(list)