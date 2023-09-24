#include <stdio.h>
#include "bit_manip.h"


unsigned short rooms [8] = {0x003, 0x010E, 0x1206,0x0B1A,0x24F8,0x4530,0x8650,0x0790};
int carryFish [4] = {0,0,0,0};



int main() {

    int *test = getFish(rooms[6]);

    // Iterate through the array and print each element
    for (int i = 0; i < 4 ; i++) {
        printf("%d ", test[i]);
    }
}
