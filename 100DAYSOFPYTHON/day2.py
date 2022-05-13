print("Welcome to the tip calculator.")
total = input("What was the total bill? $")
split = input("How many people to split the bill? ")
percentage = input("What percentage tip would youlike to give? 10, 12, or 15? ")

x = float(percentage)
y = float(total)
res = y *(x/100)
res = res + y
res = res / float(split)

print("each persons should pay : $""%.1f"%res)
