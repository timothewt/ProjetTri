cmake_minimum_required(VERSION 3.0)
project(Projet C)

set(CMAKE_C_STANDARD 99)

add_executable(Projet main.c seaux.c seaux.h listes_chainees.c listes_chainees.h entrees_utilisateurs.h entrees_utilisateurs.c)
