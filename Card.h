/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Card.h
 * Author: micah
 *
 * Created on September 20, 2017, 10:07 PM
 */

#ifndef CARD_H
#define CARD_H

class Card {
public:
    Card();
    Card(int,int,int,int,char,char,char,char);
    char get_com(int);
    int get_path(int);
    void print(Card);
    virtual ~Card();
private:
    int start[4];
    int end[4];
    char com[4];
    bool c_com[4];

};

#endif /* CARD_H */

