
#game_play = False

def if_plus(first_num,second_num) :
    res = first_num + second_num
    return res
def if_moins(first_num,second_num) :
    res = first_num - second_num
    return res
def if_fois(first_num,second_num) :
    res = first_num * second_num
    return res
def if_mod(first_num,second_num) :
    res = first_num % second_num
    return res
def if_div(first_num,second_num) :
    res = first_num / second_num
    return res
def calcul():
    game_play = False
    first_num = int(input("What's the first number ? : "))
    second_num = int(input("What's the second number ? : " ))
    print("+\n-\n*\n%\n/\n**\n")
    operation = input("pick an operation : ")
    #second_num = int(input("What's the second number ? : " ))
    if operation == '+':
        res = first_num + second_num
        print(f"{first_num} + {second_num} = {res}\n")
    if operation == '-':
        res = first_num - second_num
        print(f"{first_num} - {second_num} = {res}\n")
    if operation == '*':
        res = first_num * second_num
        print(f"{first_num} * {second_num} = {res}\n")
    if operation == '%':
        res = first_num % second_num
        print(f"{first_num} % {second_num} = {res}\n")
    if operation == '/':
        res = first_num / second_num
        print(f"{first_num} / {second_num} = {res}\n")
    if operation == '**':
        res = first_num ** second_num
        print(f"{first_num} ** {second_num} = {res}\n")

    while not game_play :
        stop = input("add a new number: ? 'yes' or 'no' : ").lower()
        if (stop == "yes"):
            operation = input("pick an operation : ")
            third_num = int(input("add the number : "))
            #operation = input("pick an operation : ")
            if operation == '+':
                res2 = res
                res = if_plus(res,third_num)
                print(f"{res2} + {third_num} = {res}\n")
            if operation == '-':
                res2 = res
                res = if_moins(res,third_num)
                print(f"{res2} - {third_num} = {res}\n")
            if operation == '*':
                res2 = res
                res = if_fois(res,third_num)
                print(f"{res2} * {third_num} = {res}\n")
            if operation == '%':
                res2 = res
                res = if_mod(res,third_num)
                print(f"{res2} % {third_num} = {res}\n")
            if operation == '/':
                res2 = res
                res = if_div(res,third_num)
                print(f"{res2} / {third_num} = {res}\n")
            if operation == '**':
                res2 = res
                res = res ** third_num
                print(f"{res2} ** {third_num} = {res}\n")
            
        else :
            game_play = True
    print(res)
calcul()
        