#!/usr/bin/env bash
##
## EPITECH PROJECT, 2021
## epitech
## File description:
## Build lib
##

gcc *.c -c -I../include/
ar rc libmy.a *.o
