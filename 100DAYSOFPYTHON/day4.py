##split = prend les input et les separes en element ds un table
##ex = je,suis,moi
##ex1 = ex.split(",")
## ex1 = ["je","suis","moi"]
##import random as rd
## rd.randint(0,2-1) renvoi un nombre aleatoire entre 0 et 2
##len =nbr elem string ou nbr elem list
import random as rd
###names_persons = persons.split(", ")
##number_persons = len(names_persons)
##persons_choice = rd.randint(0,number_persons-1)
##print(names_persons[persons_choice])
"""""
print("What do you choose? type 0 for Rock, 1 for Paper or 2 for Scissors")
choice = input()
choice2 = ["0","1","2"]
len_choice = len(choice2)
ordinator1 =str(rd.randint(0,len_choice-1))


if choice == "0" and ordinator1 == "0":
    print("computer choose :")
    print(ordinator1)
    print("equality.")
elif choice == "0" and ordinator1 == "1":
    print("computer choose :")
    print(ordinator1)
    print("you lost.")
elif choice == "0" and ordinator1 == "2":
    print("computer choose :")
    print(ordinator1)
    print("you win.")
elif choice == "1" and ordinator1 == "1":
    print("computer choose :")
    print(ordinator1)
    print("equality.")
elif choice == "1" and ordinator1 == "2":
    print("computer choose :")
    print(ordinator1)
    print("you lost.")
elif choice == "1" and ordinator1 == "0":
    print("computer choose :")
    print(ordinator1)
    print("you win.")
elif choice == "2" and ordinator1 == "2":
    print("computer choose :")
    print(ordinator1)
    print("equality.")
elif choice == "2" and ordinator1 == "0":
    print("computer choose :")
    print(ordinator1)
    print("you lost.")
elif choice == "2" and ordinator1 == "1":
    print("computer choose :")
    print(ordinator1)
    print("you win.")
else :
    print("illegal.")
"""
###correction
rock = '''
    ______
---'  ____ )____
            ___  )
    _______________)
    '''

user_choice = int(input("What do you choose? type 0 for Rock, 1 for Paper or 2 for Scissors: "))
computer_choice = rd.randint(0,2)
print(f"computer choose:  {computer_choice}")
if user_choice >=3 or user_choice < 0:
    print("you typed an invalid number, you lose !")
elif user_choice == 0 and computer_choice == 2:
    print("you win!!!")
elif computer_choice == 0 and user_choice == 2:
    print("you lose.")
elif computer_choice > user_choice:
    print("you lose.")
elif user_choice > computer_choice:
    print("you win!!!")


