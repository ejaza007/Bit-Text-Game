//
// Created by Armaghan Ejaz on 9/24/23.
//

#include <stdlib.h>
#include "bit_manip.h"

int getRoomNumber(unsigned short roomData) {
    return (roomData >> 8) & 0x7;
}



int *getRooms(unsigned short roomData) {
    static int moveRooms[8];
    int numRoom = 0;

    for (int i = 0; i < 8; i++) {
        if ((roomData & (1 << i)) != 0) {
            moveRooms[numRoom] = i;
            numRoom++;
        }
    }

    return moveRooms;
}

int checkWin(unsigned short roomData){

    unsigned short value= 0xF800;

    return (roomData & value) == value;

}

int* getFish (unsigned short roomData){

    static int fish[4];
    roomData >>= 12;


    for (int i = 0; i < 4; i++) {
        fish[i] = roomData & 1;
        roomData >>= 1;
    }

    return fish;

}

unsigned short putDownOneFish(unsigned short roomData){

    unsigned short bitmask = 0x1000;
    carryFish[0] = 0;

    // Use bitwise OR to add 1 to the 12th bit
    return roomData | bitmask;
}

unsigned short putDownTwoFish(unsigned short roomData){

    unsigned short bitmask = 0x2000;
    carryFish[1] = 0;

    // Use bitwise OR to add 1 to the 12th bit
   return roomData | bitmask;
}

unsigned short putDownBlueFish(unsigned short roomData){

    unsigned short bitmask = 0x4000;
    carryFish[2] = 0;

     return roomData | bitmask;
}

unsigned short putDownRedFish(unsigned short roomData) {
    unsigned short bitmask = 0x8000;

    carryFish[3] = 0;
    return roomData | bitmask;
}

unsigned short pickUpOneFish(unsigned short roomData){
    unsigned short bitmask = 0x7FFF;
    carryFish[0] = 1;
    return roomData & bitmask;

}

unsigned short pickUpTwoFish(unsigned short roomData){
    unsigned short bitmask = 0xBFFF;
    carryFish[1] = 1;
    return roomData & bitmask;

}

unsigned short pickUpBlueFish(unsigned short roomData){
    unsigned short bitmask = 0xDFFF;
    carryFish[2] = 1;
    return roomData & bitmask;

}

unsigned short pickUpRedFish(unsigned short roomData){
    unsigned short bitmask = 0xEFFF;
    carryFish[3] = 1;
    return roomData & bitmask;

}












