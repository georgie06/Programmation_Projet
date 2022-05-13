import random as rd
import string as strg

letters = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
numbers = ['1','2','3','4','5','6','7','8','9']
symbols = ['&','@','#','!','$','%','*']
print("Welcome to the PyPassword Generator!")
many_letters = int(input("How many letters would you like in your password? "))
many_symbols = int(input("How many symboles would you like? "))
many_numbers = int(input("How many number would you like? "))
print("\n")
password = []
##i= rd.randchar(a,z)
##j = rd.choice(strg.ascii_letters)
##print("here is the password : {password}")
## random rd.randint rd.randchar 
for char in range(1,many_letters+1) :
    password.append(rd.choice(letters))
for char in range(1,many_numbers+1) :
    password.append(rd.choice(numbers))
for char in range(1,many_symbols+1):
    password.append(rd.choice(symbols))
rd.shuffle(password)
password = ''.join(password)
stock = [password]
print(f"your password is : {password}")
