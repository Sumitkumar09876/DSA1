list=["apple","mango",3]
for i in list:
    print(i)
lists=[1,23,4]
print(3 in lists)

dict={"fruit":"mango","bird":2,"animal":2}
for i in dict:
    print(i)
print('\n')

for i in dict.values():
    print(i)

for key,value in dict.items():
    print('Key:',key,'\nValues:',value)

sample=[]
for i in range(10):
    sample.append(i*2)
print(sample)

test={}
for i in range(2):
    key=input("enter key:\n")
    values=int(input('Enter values:\n'))
    test[key]=values
print(test)

tuple=("adfa",2,"3")
print(tuple[1])

set={1,2,3,1,3,4}
print(set)