
decalage = int(input("enter the code number : "))
print(decalage)
#import sys

str1 = input("enter a string to convert into ascii values : ").lower()
print(str1)
str2 = ""
is_ok = False
def encode() :
    ascii_values = []
    str2 = ""
  #  print(str1)
    for character in str1:
      #  print(character)
        if (ord(character)+decalage) > 120:
         #   print(ord(character)+decalage)
            character = chr(ord(character)-(ord(character)-97+1))
        ascii_values.append(chr(ord(character)+decalage))
    new_strings = []
    
    for string in ascii_values:
        new_string = string.replace("!", " ")
        new_strings.append(new_string)

        #print(ascii_values)
    str3 = "".join(new_strings)
    print(str3)
    str2 = "".join(ascii_values)
    #str2 = str2 + "A"
    #print(str2)
    #print(ord("z"))
    return str2
#encode()

def decode(s_encode):
    list1 = []
    str3 = ""
    for character in s_encode:
        #if (ord(character)-decalage) < 97:
         #   character = chr(ord(character)-(ord(character)+97-1))
        list1.append(chr(ord(character)-decalage))
    str4 = "".join(list1)
    #print(str3)
    return str4
#decode(encode())
#is_ok = False
def play():
    list1 = []
    ascii_values = []
   # print(chr(97))
    rep1 = input("do you want to encode ? (y/n) ")
    if (rep1 == 'y'):
        s_encode = encode()
        #print(s_encode)
    rep2 = input("do you want to decode ? (y/n) ")#.islower()
    if (rep2 == 'y'):
        s_decode = decode(s_encode)
        print(s_decode)
play()


