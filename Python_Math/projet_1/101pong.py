#!/usr/bin/env python3
##
## EPITECH PROJECT, 2021
## epitech
## File description:
## 101pong
##
from math import *
import sys

tab = sys.argv

if tab[1] == "-h":
    print("USAGE")
    print("./101pong x0 y0 z0 x1 y1 z1 n")
    print("DESCRIPTION")
    print("    x0  ball abscissa at time t-1")
    print("    y0  ball ordinate at time t-1")
    print("    z0  ball altitude at time t-1")
    print("    x1  ball abscissa at time t-1")
    print("    y1  ball ordinate at time t-1")
    print("    z1  ball altitude at time t-1")
    print("    n   time shift (greater than or equal to zero, integer")

else :
    tab.remove('./101pong')

    tab1 = tab[:len(tab)//2]
    tab2 = tab[len(tab)//2:]
    len1 = len(tab)
    n = tab[len1-1]
    m = int(n) 
    tab1 =  list(tab1)
    tab2 = list(tab2)

    res1 = float(tab2[0])-float(tab1[0])
    res2 = float(tab2[1])-float(tab1[1])
    res3 = float(tab2[2])-float(tab1[2])
    dis = sqrt((res1**2) + (res2**2) + (res3 **2))
    if dis == 0:
        exit()
    if dis != 0:
        angle = degrees(acos(res3/dis)) - 90

    res = [res1, res2, res3]
    print("the velocity of the ball is :")
    print("(",end="")
    print("%.2f"%res[0],end = "")
    print(",",end="")
    print("%.2f"%res[1],end="")
    print(",",end="")
    print("%.2f"%res[2],end="")
    print(")")
    print("At time t + %d, ball coordinates will be:" %(m))
    res[0] = res[0]*m
    res[1] = res[1]*m
    res[2] = res[2]*m
    res[0] = res[0]+float(tab2[0])
    res[1] = res[1]+float(tab2[1])
    res[2] = res[2]+float(tab2[2])
    print("(",end="")
    print("%.2f"%res[0],end = "")
    print(",",end="")
    print("%.2f"%res[1],end="")
    print(",",end="")
    print("%.2f"%res[2],end="")
    print(")")

    if angle <= 90 and angle >= 0 :
        print("The incidence angle is:")
        print("%.2f"%angle,end = " ")
        print("degrees");
    else :
        print("The ball won't reach the paddle.")
