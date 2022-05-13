
import random
end_game = False
word_list = ["volleur","briigand","maffieux"]
word = random.choice(word_list)
count = len(word)
#initialisation int
stages = [''' 1''','''2''','''3''','''4''','''5''','''6''']
t_life = 6
list_a = []
list_word = list(word)
end_game = False
## create a list of blank
for i in range(count):
    list_a.append('_')
while not end_game :
    guess = input("Guess a letter : ").lower()
    for pos in range(count) :
        letter = list_word[pos]
        if letter == guess:
            list_a[pos] = letter
            #life decreased
    if guess not in list_word :
        t_life-=1
        print(f"life = {stages[t_life]}")
    print(list_a)
    if "_" not in list_a:
        end_game = True
        print("you win")
    elif t_life == 0:
        end_game = True
        print("you lost")