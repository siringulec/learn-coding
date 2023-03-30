def fib(n, memo = {}):
    if n in memo:
        return memo[n]
    if n<=2:
        return 1
    memo[n] = fib(n-2, memo) + fib(n-1, memo)
    return memo[n]

print(fib(3))
print(fib(8))
print(fib(10))
print(fib(50))



# test = {
#     10: 100,
#     5: 25,
# }

# print(test[10])
