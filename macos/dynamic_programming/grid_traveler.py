def grid_traveler(m, n, memo = {}):
    key = f"{m},{n}"
    if key in memo:
        return memo[key]
    if m==1 and n==1:
        return 1
    if m==0 or n==0:
        return 0
    memo[key] = grid_traveler(m-1, n, memo) + grid_traveler(m, n-1, memo)
    return memo[key]


print(grid_traveler(3, 2))
print(grid_traveler(10, 10))
print(grid_traveler(30, 30))
print(grid_traveler(50, 50))
