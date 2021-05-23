height = 0
while (height <= 0 or height > 8):
    try:
        height = int(input("Height: "))
    except ValueError:
        height = int(input("Height: "))
for i in range(height):
    for j in range(height-i-1):
        print(end=' ')
    for k in range(i+1):
        print("#",end="")
    print(" ",end=" ")
    for j in range(i+1):
        print("#",end="")
    print()

