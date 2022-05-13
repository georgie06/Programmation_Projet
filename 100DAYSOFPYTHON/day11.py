import random as rd

def who_win(value_player,ordi_list):
    final1 = 21 - value_player
    value_ordi = sum(ordi_list)
    final2 = 21 - value_ordi
    if (value_player > 21):
        print(f"you lost because value player = {value_player}")
    elif final2 < final1:
        print("you lost")
    elif (final2 == final1):
        return 1
    else :
        print("you won")

def wantyn(want,ordi_list,player_list):
    if (want == 'n' ):
        new_card = rd.randint(0,10)
        ordi_list.append(new_card)
        print(f"Your final hand :{player_list}")
        print(f"Computer's final hand : {ordi_list}")
    if want == 'y':
        new_card1 = rd.randint(0,10)
        ordi_list.append(new_card1)
        new_card = rd.randint(0,10)
        player_list.append(new_card)
        print(f"Your final hand :{player_list}")
        print(f"Computer's final hand : {ordi_list}")


def play() :
    game_play = False
    while not game_play:
        play = input("Do you want to play a game of BlackJack? Type 'y' or 'n': ").lower()
        if (play == 'y'):
            player_list = []
            ordi_list = []
            final_list = []
            for i in range(0,2):
                player_list.append(rd.randint(0,10))
            ordi_list.append(rd.randint(0,10))
            value_player = sum(player_list)
            print(f"Your card :{player_list}")
            print(f"Computer's first card: {ordi_list}")
            want = input("Do you want an other card?: Type 'y' or 'n' : ").lower()
            wantyn(want,ordi_list,player_list)
            value_player = sum(player_list)
            who_win(value_player,ordi_list)
            if (who_win == 1):
                ordi_list.append(rd.randint(0,10))
                who_win(want,ordi_list,player_list)

        else :
            game_play = True
play()
