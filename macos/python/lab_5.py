# def divide(x, y):
#     try:
#         result = x//y
#         return result
#     except ZeroDivisionError:
#         print("Division by 0 cannot be done")

# def divide(x, y):
#     if y == 0:
#         raise ZeroDivisionError("Division by 0 cannot be done")
#     else:
#         result = x//y
#         return result

# x = 0
print('\n\n\n')
# while x < 2:
#     num1 = int(input("Enter numerator: "))
#     num2 = int(input("Enter denominator: "))
#     result = divide(num1, num2)
#     print(f"Result:", result)
#     print('____________________________')
#     x +=1

def personal_info():
    fname = str(input("Please enter your first name: "))
    lname = str(input("Please enter your last name: "))
    age = int(input("Please enter your age: "))
    print("\nName: {} {}\nAge: {}".format(fname, lname, age))

personal_info()
