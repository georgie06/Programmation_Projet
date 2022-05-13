#!/usr/bin/env python3
##
## EPITECH PROJECT, 2021
## epitech
## File description:
## 104intersection
##
from math import *
import sys
tab = sys.argv

def bring_p (tab) :
    print(f"Sphere of radius {tab[8]}")
    print(f"Line passing through the point ({tab[2]}, {tab[3]}, {tab[4]}) and parallel to the vector ({tab[5]},{tab[6]},{tab[7]})")
    x = int(tab[2])
    y = int(tab[3])
    z = int(tab[4])
    tmp = [x,y,z]
    return tmp

def bring_v (tab) :

    x = int(tab[5])
    y = int(tab[6])
    z = int(tab[7])
    tmp = [x,y,z]
    return tmp
def discriminant(a,b,c) :
    tmp = 4*a*c
    delta = b **2 - tmp

    return delta


def exo2(a, b, c) :
    delta = discriminant(a, b, c)
    if (delta < 0) :
        return 0
    elif (delta > 1) :
        return 2
    else : 
        return 1

def result_for_2(a, b,c) :

    delta = discriminant(a, b, c)
    res = []
    x1 = -b + sqrt(delta)
    x2 = b + sqrt(delta)
    x1 = x1/(2 * a)
    x2 = x2/(2 * a)
    res[0] = x1
    res[1] = x2
    return res

def result_for_1(a,b,c) : 

    delta = discriminant(a, b, c)
    x2 = b + sqrt(delta)
    x2 = x2/(2 * a)
    return x2

def exercise4(p,v,t) :
    L = []
    L[0] = p[0] + v[0] * t
    L[1]= p[1] + v[1] * t
    L[2] = p[2]= v[2]* t
    return L



def first_calcule(p, v,radius) :

    a = v[0]**2 + v[1]**2+ v[2]**2
    b = 2 * ((p[0] * v[0]) + (p[1] * v[1]) + (p[2] * v[2]))
    c = p[0]**2 + p[1]**2 + p[2]**2 - radius
    y = number_reoslve = exo2(a, b, c)
    t = 0

    #point all_t
    res = []
    res_1 = []
    res_2 = []
    if (number_reoslve == 0) :
        print("No intersection point.\n")
    else :
        print(f"a = {a}, b = {b}, c = {c}")
        print(f"{number_reoslve}intersection points:\n")
        if (number_reoslve == 1) :
            t = result_for_1(a, b, c)
            res = exercise4(p, v, t)
            print(f"({res[0]},{res[1]},{res[2]})\n")
        elif (number_reoslve == 2) :
            all_t = result_for_2(a, b, c)
            res_1 = exercise4(p, v, all_t[0])
            res_2 = exercise4(p ,v, all_t[1])
            print(f"({res_1[0]},{res_1[1]},{res_1[2]})\n")
            print(f"({res_2[0]},{res_2[1]},{res_2[2]})\n")


def check_all(tab) :
    rad = int(tab[8])
    if (tab[1][0] == '1') :
        p = bring_p(tab)
        v = bring_v(tab)
        first_calcule(p, v, rad)
        return 0
    elif (tab[1][0] == '2') :
        return 0
    elif (tab[1][0] == '3') :
        return 0
    else :
        print("missing option\n")
        return 84
    

#print(a)

if (tab[1] == "-h") :
    print("USAGE\n    ./104intersection opt xp yp zp xv yv zv p\n")
    print("DESCRIPTION")
    print("    opt             surface option: 1 for a sphere, 2 for a cylinder, 3 for a cone")
    print("    (xp, yp, zp)    coordinates of a point by which the light ray passes through")
    print("    (xv, yv, zv)    coordinates of a vector parallel to the light ray")
    print("    P               parameter: radius of the sphere, radius of the cylinder, or")
    print("                    angle formed by the cone and the Z-axis")
else :
   # if (len(tab) == 2 and tab[1][0] == '-' and tab[1][1] == 'h' and tab[1][2] == '\0') :
   #     my_help()
    if (len(tab) == 9) :
        check_all(tab)
    else :
        print("bad input\nconsult -h for help\n")
        exit()






