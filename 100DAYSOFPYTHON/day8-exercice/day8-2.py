
def h_w_c(width,height,coverage) :
    number_of_can = (width*height)/coverage
    print(f"you'll need {round(number_of_can)} cans of paint")

width = int(input("width : "))
height = int(input("height : "))
coverage = 5
h_w_c(width,height,coverage)