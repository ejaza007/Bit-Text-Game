//
// Created by Armaghan Ejaz on 9/24/23.
//
#include <stdio.h>
#include <stdlib.h>
#include "bit_manip.h"


unsigned short rooms [8] = {0x003, 0x010E, 0x1206,0x0B1A,0x24F8,0x4530,0x8650,0x0790};
int carryFish [4] = {0,0,0,0};



int main() {


    int currentRoomIndex = 7;

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




        printf("Accessible Rooms:\n");

        int numAccessibleRooms = 0; // Count of accessible rooms

        for (int i = 0; i < 8; i++) {
            if (accessibleRooms[i] != 0) {
                printf("Go to Room %d\n", accessibleRooms[i]);
                numAccessibleRooms++;
            }
        }


        printf("Enter the room number to go to (0 to quit): ");
        int choice;
        scanf("%d", &choice);

        //if (choice == 0) {
        //  break;  // Exit the loop if the user chooses to quit
        //} else {
        // Check if the chosen room is accessible
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

