num = int(input("send your number : "))
def prem(num):
    is_prime = True
    if num > 1 :
        for i in range(2,num) :
            if num % i == 0:
                is_prime = False
                print(f"{num} is not a prime number")
                break
        else :
            is_prime = True
            print(f"{num} is a prime number")
    else :
        is_prime = True
        print(f"{num} is in prime number")

prem(num)