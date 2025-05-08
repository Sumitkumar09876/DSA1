'''
QI. A company is transmitting data to another server. The data is in the form of numbers. To secure the
data during transmission, they plan to obtain a security key that will be sent along with the data. The
security key is identified as the count of the unique repeating digits in the data. Write an algorithm to
find the security key for the data.
The input consists of an integer-, representing the data to be transmitted.
Print an integer representing the security key for the given data
input: 12345
output: 0
input: 121342
output:2
'''
class Solution:
    def solv(self,list):
        dict={}
        for i in list:
            if i in dict:
                dict[i]+=1
            else:
                dict[i]=1
        print(dict)
        store=0
        for key,value in dict.items():
            if value>1:
                store+=1
        return store

list=[1,2,2,3,4,4,5]
sl=Solution()
print(sl.solv(list))