/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Card.cpp
 * Author: micah
 * 
 * Created on September 20, 2017, 10:08 PM
 */

#include "Card.h"

#include <iostream>

using namespace std;

Card::Card() {
}

Card::Card(int e1, int e2, int e3, int e4, char c1, char c2, char c3, char c4) {
    for(int i = 0; i < 4; i++) {
        start [i] = i + 1;
        c_com[i] = false;
    }
    end[0] = e1;
    end[1] = e2;
    end[2] = e3;
    end[3] = e4;
    com[0] = c1;
    com[1] = c2;
    com[2] = c3;
    com[3] = c4;
}
void Card::print(Card card) {
    for(int i = 0; i < 4; i++)
    {
        cout << card.start[i] << card.com[i] << card.end[i] << endl; 
    }
}
char Card::get_com(int i) {
    if(!c_com[i]) 
    {
        c_com[i] = true;
        return com[i];
    }
    return 'p';
}
int Card::get_path(int i) {
    return end[i];
}

Card::~Card() {
}

