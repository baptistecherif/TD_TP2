cmake_minimum_required(VERSION 3.21)
project(TD_TP2 C)

set(CMAKE_C_STANDARD 99)

add_executable(TD_TP2 main.c Card.c CardTest.h Deck.c DeckTest.h Hand.c HandTest.h)
