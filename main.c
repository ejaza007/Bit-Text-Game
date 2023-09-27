//
// Created by Armaghan Ejaz on 9/24/23.
//
#include <stdio.h>
#include <stdlib.h>
#include "bit_manip.h"


unsigned short rooms [8] = {0x003, 0x010E, 0x1206,0x0B1A,0x24F8,0x4530,0x8650,0x0790};
int carryFish [4] = {0,0,0,0};


int main() {


    int currentRoomIndex = 0;

    while (1) {
        unsigned short currentRoomData = rooms[currentRoomIndex];

        printf("Room Number: %d\n", getRoomNumber(currentRoomData));

        int *accessibleRooms = getRooms(currentRoomData);

        accessibleRooms[0] = 0;
        accessibleRooms[1] = 0;
        accessibleRooms[2] = 0;
        accessibleRooms[3] = 0;
        accessibleRooms[4] = 0;
        accessibleRooms[5] = 0;
        accessibleRooms[6] = 0;
        accessibleRooms[0] = 0;

        accessibleRooms = getRooms(currentRoomData);


        printf("Room Movement Selection:\n");

        int numAccessibleRooms = 0; // Count of accessible rooms

        for (int i = 0; i < 8; i++) {
            if (accessibleRooms[i] != 0) {
                printf("move to Room %d\n", accessibleRooms[i]);
                numAccessibleRooms++;
            }
        }


        printf("Enter the room number to go to (0 to quit):\n");


        printf("Fish you have : ");
        if (carryFish[0] == 1) {
            printf("One Fish ");
        }
        if (carryFish[1] == 1) {
            printf("Two Fish ");
        }
        if (carryFish[2] == 1) {
            printf("Blue Fish ");
        }
        if (carryFish[2] == 1) {
            printf("Red Fish ");
        }

        printf("\nAvaliable Fish: ");

        int *availableFish = getFish(rooms[currentRoomIndex]);

        if (availableFish[0] == 1) {
            printf("One Fish ");
        }
        if (availableFish[1] == 1) {
            printf("Two Fish ");
        }
        if (availableFish[2] == 1) {
            printf("Red Fish ");
        }
        if (availableFish[3] == 1) {
            printf("Blue Fish ");
        }

        printf("\nFish Options: ");

        if(availableFish[0] == 1){
            printf("A - pick up One Fish \n");

        }
        if(availableFish[1] == 1){
            printf("B = pick up Two Fish \n");
        }
        if(availableFish[2] == 1){
            printf("C = pick up Red Fish \n");
        }
        if(availableFish[3] == 1){
            printf("D = pick up Two Fish \n");
        }



        int choice;
        scanf("%d", &choice);

        if (choice == 0) {
            break;  // Exit the loop if the user chooses to quit
        } else {
            int validChoice = 0;
            //free(accessibleRooms);
            for (int i = 0; i < 8; i++) {
                if (accessibleRooms[i] == choice) {
                    currentRoomIndex = choice;
                    validChoice = 1;
                    break;
                }
            }

            if (!validChoice) {
                printf("Invalid choice. Please select a valid room or enter 0 to quit.\n");
            }
        }

    }
}
