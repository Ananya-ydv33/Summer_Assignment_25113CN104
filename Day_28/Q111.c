#include <stdio.h>
#include <string.h>

struct Ticket {
    int ticketNo;
    char passengerName[50];
    char destination[50];
    int seats;
};

int main() {
    struct Ticket t;
    int choice;
    int booked = 0;

    do {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. Book Ticket\n");
        printf("2. View Ticket\n");
        printf("3. Cancel Ticket\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if (booked) {
                    printf("Ticket is already booked.\n");
                } else {
                    printf("Enter Ticket Number: ");
                    scanf("%d", &t.ticketNo);

                    printf("Enter Passenger Name: ");
                    scanf(" %[^\n]", t.passengerName);

                    printf("Enter Destination: ");
                    scanf(" %[^\n]", t.destination);

                    printf("Enter Number of Seats: ");
                    scanf("%d", &t.seats);

                    booked = 1;
                    printf("Ticket booked successfully!\n");
                }
                break;

            case 2:
                if (!booked) {
                    printf("No ticket booked.\n");
                } else {
                    printf("\n----- Ticket Details -----\n");
                    printf("Ticket Number : %d\n", t.ticketNo);
                    printf("Passenger Name: %s\n", t.passengerName);
                    printf("Destination   : %s\n", t.destination);
                    printf("Seats Booked  : %d\n", t.seats);
                }
                break;

            case 3:
                if (!booked) {
                    printf("No ticket to cancel.\n");
                } else {
                    booked = 0;
                    printf("Ticket cancelled successfully.\n");
                }
                break;

            case 4:
                printf("Thank you for using the Ticket Booking System!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}