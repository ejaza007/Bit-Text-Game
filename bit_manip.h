//
// Created by Armaghan Ejaz on 9/24/23.
//

#ifndef CS203_LAB3_BIT_MANIP_H
#define CS203_LAB3_BIT_MANIP_H

#include <stdio.h>

extern unsigned short rooms [8];
extern int carryFish [4];
int fishArr[4];
int getRoomNumber(unsigned short roomData);
int* getRooms(unsigned short roomData);
int checkWin(unsigned short roomData);
int* getFish(unsigned short roomData);
unsigned short putDownOneFish(unsigned short roomData);
unsigned short putDownTwoFish(unsigned short roomData);
unsigned short putDownBlueFish(unsigned short roomData);
unsigned short putDownRedFish(unsigned short roomData);
unsigned short pickUpOneFish(unsigned short roomData);
unsigned short pickUpTwoFish(unsigned short roomData);
unsigned short pickUpBlueFish(unsigned short roomData);
unsigned short pickUpRedFish(unsigned short roomData);



#endif //CS203_LAB3_BIT_MANIP_H

