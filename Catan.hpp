#ifndef CATAN_HPP
#define CATAN_HPP
#include "Player.hpp"
#include "Hexagon.cpp"
#include <iostream>
#include <string>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
#define NUM_HEX 19
#define NUM_RESOURCES 19

class Catan
{

private:
    Hexagon *Hexagon[NUM_HEX];
    Player *players[3];
    
public:
    Catan(Player &p1, Player &p2, Player &p3);
    void order_resources();
    void order_turns();
    void start_game();
    ~Catan();
};
#endif