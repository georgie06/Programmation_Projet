#!/usr/bin/env python3
##
## EPITECH PROJECT, 2021
## epitech
## File description:
## translation
##
from math import *
import sys

tab = sys.argv
if (tab[3] == '-r' or tab[3] == '-s') :
    x = int(tab[1])
    y = int(tab[2])
    i = int(tab[4])
else :
    x = int(tab[1])
    y = int(tab[2])
    i = int(tab[4])
    j = int(tab[5])
z = 1
def translation (x,y,z,i,j) :
    a = 1*x+0*y+z*i
    b = x*0+y*1+z*j
    c = x*0+y*0+z*1
    tmp = [[a],[b],[x*0+y*0+z*1]]
    x2 = "%.2f"%x
    y2 = "%.2f"%y
    a2 = "%.2f"%a
    b2 = "%.2f"%b
    i2 = "%.2f"%i
    j2 = "%.2f"%j 
    print(f"Translation along vector ({i}, {j})")
    print(f"1.00 0.00 {i2}")
    print(f"0.00 1.00 {j2}")
    print("0.00 0.00 1.00")
    print(f"({x2}, {y2}) => ({a2}, {b2})")
    #tab.remove('./101pong')
def rotation(x,y,i) :
    a = cos(i)*x+(-sin(i))*y+ 0*z
    b = sin(i)*x+ cos(i)*y + 0*z
    i2 = cos(i)
    j = -sin(i)
    k = sin(i)
    l = cos(i)
    a2 = "%.2f"%round(a)
    b2 = "%.2f"%round(b) 
    i2 = "%.2f"%round(i2)
    j = "%.2f"%round(j)
    k = "%.2f"%round(k)
    l = "%.2f"%round(l)
    x = "%.2f"%x
    y = "%.2f"%y
    print(f"Rotation by a {i} degree angle")
    print(f"{i2} {j} 0.00")
    print(f"{k} {l} 0.00")
    print("0.00 0.00 1.00")
    print(f"({x}, {y}) => ({a2}, {b2})")

    def reflection(x,y,i) : #multiplication matrix rotation et translation?
    r = i
    i = radians(i)
    a = (cos(2*i))*x
    a = a + (sin(2*i))*y
    b = ((sin(2*i))*x)-((cos(2*i))*y)
    i2 = cos(i)
    j = -sin(i)
    k = sin(i)
    l = cos(i)
    a2 = "%.2f"%round(a)
    b2 = "%.2f"%round(b)
    i2 = "%.2f"%round(i2)
    j = "%.2f"%round(j)
    k = "%.2f"%round(k)
    l = "%.2f"%round(l)
    x = "%.2f"%x
    y = "%.2f"%y
    matrix3 = [[i2,j,0.00],[k,l,0.00],[0.00,0.00,1.00]]
    print(f"Reflection over an axis with an inclination angle of {r} degree")
    print(f"{i2} {j} 0.00")
    print(f"{k} {l} 0.00")
    print("0.00 0.00 1.00")
    print(f"({x}, {y}) => ({a2}, {b2})")

def scalar(x,y,z,i,j) :
    a = x*i
    b = y*j
    x2 = "%.2f"%x
    y2 = "%.2f"%y
    a2 = "%.2f"%a
    b2 = "%.2f"%b
    i2 = "%.2f"%i
    j2 = "%.2f"%j
    matrix4 = [[i2,0.00,0.00],[0.00,j2,0.00],[0.00,0.00,0.00]]
    print(f"Scaling by factors {i} and {j}")
    print(f"{i2} 0.00 0.00")
    print(f"0.00 {j2} 0.00")
    print("0.00 0.00 0.00")
    print(f"({x2}, {y2}) => ({a2}, {b2})")
if tab[3] == '-t':
    translation(x,y,z,i,j)
if tab[3] == '-r':
    rotation(x,y,i)
if tab[3] == '-s':
    reflection(x,y,i)
if tab[3] == '-z' :
    scalar(x,y,z,i,j)
