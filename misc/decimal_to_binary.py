
entry = int(input("Enter a decimal: "))
remainder = ''

while (entry > 0):

    remainder += str(entry % 2)
    entry = entry // 2

    print(entry, remainder)

print("\n\n")
print(entry)
print(remainder)



