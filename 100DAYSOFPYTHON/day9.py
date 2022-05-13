
game_play = False
def bid():
    game_play = False
    d = dict()
    value = []
    while not game_play:
        str = input("What's your name : ").lower()
        print(str)
        d[str] = int(input("What's your bid ?: $ "))
        stop = input("Are they any others bidder ? Type 'yes' or 'no') ").lower()
        if stop == "no":
            game_play = True
   #print(value)
    for key in d: 
        value.append(d[key])

    max_v = max(value)
    for key, value2 in d.items():
         if max_v == value2:
            print(f"The winner is : {key} with a bid of {max_v} $")
bid()
