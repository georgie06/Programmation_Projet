print("Welcome to Treasure Island")
print("Your mission is to find the treasure.")
print('You\'re at a cross road. Where do you want to go? Type "left" or "right"')
condition = input().lower()

if condition == "left" :
    print("You come to a lake. There is an island in the middle of the lake. Type wait to wait for boat. Type swim to swin across.")
    condition2 = input().lower()
    if condition2 == "wait":
        print("You arrived to the island unharmed. There is a house with 3 doors. One red, one yellow and one blue. Which colour do you choose?")
        condition3 = input().lower()
        if condition3 == "red":
            print("It's a room full of fire. Game over.")
        elif condition3 == "blue":
            print("Game over.")
        elif condition == "yellow": 
            print("you win.")
        else :
            print("you choose a door who doesn't exist. Game over.")
    else :
        print("You fell in a hole. Game over.")
