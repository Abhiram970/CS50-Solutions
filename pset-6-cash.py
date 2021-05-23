# Author : P.V. Abhiram
# CS50 Pset - 1 : Cash
cash = -1
while (cash <= 0):
    try:
        cash = float(input("change owed = "))
    except ValueError:
        cash = float(input("change owed = "))
currency = [25,10,5,1]
count,i = 0,0
cents = round(cash * 100)
while (cents):
    if (currency[i] > cents):
        i += 1
    else:
        cents = cents - currency[i]
        count += 1
print(count)
