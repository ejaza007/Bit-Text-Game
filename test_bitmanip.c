#include <stdio.h>
#include <assert.h>
#include "bit_manip.h"


int main() {

    unsigned short testRooms[8] = {0x003, 0x010E, 0x1206, 0x0B1A, 0x24F8, 0x4530, 0x8650, 0x0790};



    // Test cases for getRoomNumber function
    assert(getRoomNumber(testRooms[0]) == 0);
    assert(getRoomNumber(testRooms[6]) == 6);
    assert(getRoomNumber(testRooms[7]) == 7);


    // Test cases for getRooms function
    int *arr = getRooms(testRooms[1]);
    int testarr[8] = {0,1,2,3,0,0,0,0};

    for(int i = 0; i<8;i++){
        assert(arr[i] == testarr[i] );
    }







    // Test cases for checkWin function
    assert(checkWin(0xF800) == 1);
    assert(checkWin(0x0F00) == 0);

//    // Test cases for getFish function
    int* fish = getFish(testRooms[6]);
    assert(fish[0] == 0);
    assert(fish[1] == 0);
    assert(fish[2] == 0);
    assert(fish[3] == 1);

    // Additional test cases for putDownOneFish, putDownTwoFish, putDownBlueFish, putDownRedFish
    unsigned short roomData = 0x0000;
    assert(putDownOneFish(roomData) == 0x1000);
    assert(putDownTwoFish(roomData) == 0x2000);
    assert(putDownBlueFish(roomData) == 0x4000);
    assert(putDownRedFish(roomData) == 0x8000);


    // Additional test cases for pickUpOneFish, pickUpTwoFish, pickUpBlueFish, pickUpRedFish
    roomData = 0xFFFF;
    assert(pickUpOneFish(roomData) == 0x7FFF);
    assert(pickUpTwoFish(roomData) == 0xBFFF);
    assert(pickUpBlueFish(roomData) == 0xDFFF);
    assert(pickUpRedFish(roomData) == 0xEFFF);

     printf("All test cases passed!\n");

    return 0;
}
