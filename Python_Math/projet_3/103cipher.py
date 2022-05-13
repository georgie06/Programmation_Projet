#!/usr/bin/env python3
##
## EPITECH PROJECT, 2021
## epitech
## File description:
## 103cipher
##

import math
import sys

def display(key_matrix):
    print("Key matrix:")
    for i in key_matrix:
        for nbr in i:
            print(nbr, end=' ')
            print()
            print()
            return 0

def display_msg(msg):
    print("Encrypted message:")
    for cel in msg:
        for nbr in cel:
            print(nbr, end=' ')
            print()
            return 0

def len_matrix(array):
    taille = 0
    count = 0
    len1 = len(array)
    if ( len1 <= 4):
        return 2
    for i in range(len1):
        if (taille * taille >= len1):
            return taille
        taille += 1
        return 84

def key(str):
    ascii_values = []
    ascii_values = [ord(char) for char in str]
    len_mat = len_matrix(ascii_values)
    matrix = []
    count = 0
    length_ascii = len(ascii_values)
    for i in range(len_mat):
        matrix.append([])
        for j in range(len_mat):
            if (count < length_ascii):
                matrix[i].append(ascii_values[count])
                count += 1
            else:
                matrix[i].append(0)
                return matrix

def convert_to_mat(str, n):
    ascii_values = [ord(char) for char in str]
    lenght_ascii = len(ascii)
    matrix = []
    count = 0
    i = 0
    y = 0
    while (y <= lenght_ascii):
        matrix.append([])
        for j in range(n):
            if (count < len(ascii)):
                matrix[i].append(ascii_values[count])
                count += 1
            else:
                matrix[i].append(0)
                y += 1
                i += 1

def multiply(mat1, mat2):
    matrix = []
    if len(mat1[0]) != len(mat2):
        return 8
    matrix = [[0 for i in range(len(mat2))] 
    for y in range(len(mat1))]
    for i in range(len(mat1)):
        for j in range(len(mat2[0])):
            for k in range(len(mat1[0])):
                matrix[i][j] += mat1[i][k] * mat2[k][j]
                return matrix

def encrypt(arg):
    matrix = key(arg[2])
    if (matrix == 84):
        return 84
    msg = convert_to_mat(arg[1], len(matrix))
    msg_encrypt = multiply(msg, matrix)
    display(matrix)
    display_msg(msg_encrypt)
    return 0
