def count_symbol(matrix, symbol):
    count = 0
    for row in matrix:
        count += row.count(symbol)
    return count

# Sample input
matrix = [
    ['b', 'b', 'w', 'b', 'b', 'y', 'w', 'w', 'w'],
    ['b', 'b', 'w', 'w', 'b', 'y', 'y', 'b', 'b'],
    ['y', 'y', 'y', 'w', 'w', 'b', 'b', 'b', 'b'],
    ['y', 'e', 'y', 'e', 'y', 'w', 'w', 'b', 'b'],
    ['w', 'b', 'b', 'w', 'w', 'b', 'w', 'w', 'w'],
    ['B', 'b', 'w', 'w', 'w', 'w', 'w', 'y', 'w']
]

# Count the symbol 'y'
count = count_symbol(matrix, 'y')
print(count)