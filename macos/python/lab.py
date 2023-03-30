# import re

# txt = "The rain in Spain"
# x = re.search("^The.*Spain$", txt)
# print(re.findall("ai", txt))
# print(re.findall("Portugal", txt))
# y = re.search("\s", txt)
# print("The first white-space character is located in position:", y.start())
# print(re.search("Portugal", txt))
# print(re.split("\s", txt))
# print(re.split("\s", txt, 1))
# print(re.sub("\s", "9", txt))
# print(re.sub("\s", "9", txt, 2))
# print(re.search("ai", txt))
# z = re.search(r"\bS\w+", txt)
# print(z.span())
# k = re.search(r"\bS\w+", txt)
# print(k.string)
# l = re.search(r"\bS\w+", txt)
# print(l.group())

try:
    num1 = int(input("Enter First Number: "))
    num2 = int(input("Enter Second Number: "))
    result = num1//num2
    print(result)
except ZeroDivisionError as e:
    print("Division by 0 cannot be done")
