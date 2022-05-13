'''import sys
def greet():
    word = input("print with a decalage : ")
    ch = "greet"
    print(f"   {word}  \n by {ch} ")
if __name__ == "__greet__":
    sys.exit(greet())'''
#import shlex
import sys

'''def echo(word: str) -> None:
   """A dummy wrapper around print."""
   # for demonstration purposes, you can imagine that there is some
   # valuable and reusable logic inside this function
   #word = input("print with a decalage : ")
   ch = "greet"
   print(f"   {word}  \n by {ch} ")

def main() -> int:
    """Echo the input arguments to standard output"""
    #phrase = shlex.join(sys.argv)
    word = input("print with a decalage : ")
    echo(word)
    return 0

if __name__ == '__main__':
    sys.exit(main())'''
def greet() :
    word = input("tell me the word :")
    print(word)
    print("\n")
    print("by greet")
greet()