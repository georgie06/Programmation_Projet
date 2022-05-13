
perso = [
    {
        'name' : 'Instagram',
        'follower_count' : 346,
        'description' : 'Social media Platform',
        'country' : 'United States'

    },
    {
        'name' : 'Cristiano Ronaldo' ,
        'follower_count' : 215 ,
        'description' : 'Footballer' ,
        'country' : 'Portugal'



    },
    {
        'name' : 'Ariana Grande',
        'follower_count' : 183,
        'description' : 'Musician and actress',
        'country' : 'United States'


    },
    {
        'name' : 'Dwayne Johnson',
        'follower_count' : 181 ,
        'description' : 'Actor and professional wrestler'  ,
        'country' : 'United States'


    },
    ]
stock = []
j = 0
for i in range(0,len(perso)):
    one = perso[i]['follower_count']
    two = perso[i+1]['follower_count']
    print(one)
    print(two)
    for key, values in (perso[i].items()):# for j in values:
        j = i
        print (perso[j]['name'] , "is a",perso[j]['description'],"who is install in",perso[j]['country'])
        print (perso[i+1]['name'] , "is a",perso[i+1]['description'],"who is install in",perso[i+1]['country'])
        print (f"who has the most follower within {perso[i]['name']} and {perso[i+1]['name']} "
        who = int(input("1 or 2 ? "))
        if(who == 1):
            if(one > two):
                j-=1
                i+=1
                print("you win")
               # j-=1a
                print(j)
                print(i)
               # i+=1
            else :
                print("you lost")
                break
        if(who == 2):
            if(two > one):
                i-=1
                j+=1
                print("you win")
                print(i)
                print(j)
            else :
                print("you lost")
                break
        break

       # print(len(perso))
       # print(i)

      #  print(type(key))
         # print(type(perso[i]))