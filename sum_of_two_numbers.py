def sum_of_two_numbers(num1, num2):
    return num1 + num2

num1 = float(input("Enter the first number: "))
num2 = float(input("Enter the second number: "))

result = sum_of_two_numbers(num1, num2)
print("The sum of", num1, "and", num2, "is", result)

# Add new test case
num1 = 7
num2 = 9
result = sum_of_two_numbers(num1, num2)
print("The sum of", num1, "and", num2, "is", result)
