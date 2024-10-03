#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define max_reserv 300

typedef struct {
    char fname[25];
    char lname[25];
    char nphone[20];
    int age;
    char status[20];
    char date[15];
    int id;
} reserv;

reserv reservations[max_reserv];
int numbreserv = 0; // Number of reservations

void addReservation() {
    if (numbreserv >= max_reserv) {
        printf("The reservation list is full!\n");
        return;
    }
    
    reserv newReserv;
    newReserv.id = numbreserv + 1;

    printf("Enter first name: ");
    sprintf("%s", newReserv.fname);
    printf("Enter last name: ");
    sprintf("%s", newReserv.lname);
    printf("Enter phone number: ");
    scanf("%s", newReserv.nphone);
    printf("Enter age: ");
    scanf("%d", &newReserv.age);
    printf("Enter the status (valid/report/annual/trait): ");
    sprintf("%s", newReserv.status);
    printf("Enter your reservation date (yyyy-mm-dd): ");
    sprintf("%s", newReserv.date);

    reservations[numbreserv] = newReserv;
    numbreserv++;
    printf("The reservation has been added successfully.\n");
}

void editReservation() {
    int id, choice;
    printf("Enter the reservation ID to be updated: ");
    scanf("%d", &id);

    for (int i = 0; i < numbreserv; i++) {
        if (reservations[i].id == id) {
            do {
                printf("Select the field you want to edit:\n");
                printf("1. First Name\n");
                printf("2. Last Name\n");
                printf("3. Phone Number\n");
                printf("4. Age\n");
                printf("5. Status\n");
                printf("6. Date\n");
                printf("7. Back to Main Menu\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);

                switch (choice) {
                    case 1:
                        printf("Enter new first name: ");
                        scanf("%s", reservations[i].fname);
                        printf("First name updated successfully.\n");
                        break;
                    case 2:
                        printf("Enter new last name: ");
                        scanf("%s", reservations[i].lname);
                        printf("Last name updated successfully.\n");
                        break;
                    case 3:
                        printf("Enter new phone number: ");
                        scanf("%s", reservations[i].nphone);
                        printf("Phone number updated successfully.\n");
                        break;
                    case 4:
                        printf("Enter new age: ");
                        scanf("%d", &reservations[i].age);
                        printf("Age updated successfully.\n");
                        break;
                    case 5:
                        printf("Enter the new status: ");
                        scanf("%s", reservations[i].status);
                        printf("Status updated successfully.\n");
                        break;
                    case 6:
                        printf("Enter new date (YYYY-MM-DD): ");
                        scanf("%s", reservations[i].date);
                        printf("Date updated successfully.\n");
                        break;
                    case 7:
                        printf("Back to main menu.\n");
                        break;
                    default:
                        printf("The option is invalid.\n");
                }
            } while (choice != 7);
            return;
        }
    }
    printf("There is no reservation with this ID.\n");
}

void deleteReservation() {
    int id;
    printf("Enter the reservation ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < numbreserv; i++) {
        if (reservations[i].id == id) {
            for (int j = i; j < numbreserv - 1; j++) {
                reservations[j] = reservations[j + 1];
            }
            numbreserv--;
            printf("The reservation has been successfully deleted.\n");
            return;
        }
    }
    printf("No reservation found with this ID.\n");
}

void viewReservation() {
    int id;
    printf("Enter the Reservation ID to view its details: ");
    scanf("%d", &id);

    for (int i = 0; i < numbreserv; i++) {
        if (reservations[i].id == id) {
            printf("Here are the reservation details:\n");
            printf("Reservation ID: %d\n", reservations[i].id);
            printf("First Name: %s\n", reservations[i].fname);
            printf("Last Name: %s\n", reservations[i].lname);
            printf("Phone Number: %s\n", reservations[i].nphone);
            printf("Age: %d\n", reservations[i].age);
            printf("Reservation Status: %s\n", reservations[i].status);
            printf("Reservation Date: %s\n", reservations[i].date);
            return;
        }
    }
    printf("Booking not found!\n");
}

void sortReservationsByName() {
    for (int i = 0; i < numbreserv - 1; i++) {
        for (int j = i + 1; j < numbreserv; j++) {
            if (strcmp(reservations[i].fname, reservations[j].fname) > 0) {
                reserv temp = reservations[i];
                reservations[i] = reservations[j];
                reservations[j] = temp;
            }
        }
    }
    printf("Reservations are sorted by name.\n");
}

void reservationStatistics() {
    int totalAge = 0;
    int ageG1 = 0, ageG2 = 0, ageG3 = 0;
    int verified = 0, postponed = 0, cancelled = 0, processed = 0;

    for (int i = 0; i < numbreserv; i++) {
        totalAge += reservations[i].age;

        if (reservations[i].age <= 18) ageG1++;
        else if (reservations[i].age <= 35) ageG2++;
        else ageG3++;

        if (strcmp(reservations[i].status, "Verified") == 0)
            verified++;
        else if (strcmp(reservations[i].status, "Postponed") == 0)
            postponed++;
        else if (strcmp(reservations[i].status, "Cancelled") == 0)
            cancelled++;
        else if (strcmp(reservations[i].status, "Processed") == 0)
            processed++;
    }

    printf("Average age of patients: %.2f\n", (double)totalAge / numbreserv);
    printf("Number of patients by age group:\n");
    printf("0-18: %d\n", ageG1);
    printf("19-35: %d\n", ageG2);
    printf("36+: %d\n", ageG3);
    printf("Number of reservations by status:\n");
    printf("Verified: %d\n", verified);
    printf("Postponed: %d\n", postponed);
    printf("Cancelled: %d\n", cancelled);
    printf("Processed: %d\n", processed);
}

int main() {
    int choice;
    do {
        printf("Reservation Management System:\n");
        printf("1. Add Reservation\n");
        printf("2. Edit Reservation\n");
        printf("3. Delete Reservation\n");
        printf("4. View Reservation Details\n");
        printf("5. Sort Reservations by Name\n");
        printf("6. Statistics\n");
        printf("7. Exit Program\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addReservation();
                break;
            case 2:
                editReservation();
                break;
            case 3:
                deleteReservation();
                break;
            case 4:
                viewReservation();
                break;
            case 5:
                sortReservationsByName();
                break;
            case 6:
                reservationStatistics();
                break;
            case 7:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid option!\n");
        }
    } while (choice != 7);

    return 0;
}
