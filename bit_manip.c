//
// Created by Armaghan Ejaz on 9/24/23.
//

#include "bit_manip.h"



int getRoomNumber(unsigned short roomData) {
    return (roomData >> 8) & 0x7;
}

int* getRooms(unsigned short roomData) {
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
    // Shift right to get rid of bits 0-11
    roomData >>= 12;

    // Use a mask to extract the 4 bits (15-12)
    for (int i = 0; i < 4; i++) {
        fish[i] = roomData & 1;
        roomData >>= 1;
    }

    return fish;

}










