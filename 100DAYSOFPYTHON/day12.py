print("Welcom to the Number Guessing Game!")
print("I'm thinking a number between 1 and 100.")
import random as rd
#game_play = False
def easy(attempts,num,guess) :
    print(f"You have {attempts} attempts remaining to guess the number.")
    #num = rd.randint(0,100)
    #guess = int(input("Make a guess : "))
    if guess != num :
        if (guess > num):
            print("too high")
        else :
            print("too low")
        attempts-=1

def play_game() :

    game_play = False
    choose = input("Choose a difficulty. Type 'easy' or 'hard': ")
    if choose == "easy":
        attempts = 10
        num = rd.randint(0,100)
        while not game_play :
            print(f"You have {attempts} attempts remaining to guess the number.")
            guess = int(input("Make a guess : "))
            if guess != num :
                if (guess > num):
                    print("too high")
                else :
                    print("too low")
                attempts-=1
            if (num == guess):
                game_play = True
                print("YOUUUU WIIIINN") 
                attempts-=1   
            if attempts == 0 :
                game_play = True
    elif (choose == "hard"):
        attempts = 5
        num = rd.randint(0,100)
        while not game_play :
            print(f"You have {attempts} attempts remaining to guess the number.")
            guess = int(input("Make a guess : "))
            if guess != num :
                if (guess > num):
                    print("too high")
                else :
                    print("too low")
                attempts-=1
                if (num == guess):
                    game_play = True
                    print("YOUUUU WIIIINN")
                if attempts == 0:
                    game_play = True
                    print("YOU FUCKING LOOOSSSEEE!")
            else :
                game_play = True
play_game()
