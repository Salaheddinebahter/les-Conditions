#include <stdio.h>
#include <string.h>

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
int numbreserv = 0; 

void initReservations() {
    strcpy(reservations[0].fname, "salah eddine");
    strcpy(reservations[0].lname, "bahter");
    strcpy(reservations[0].nphone, "0710562670");
    reservations[0].age = 30;
    strcpy(reservations[0].status, "Verified");
    strcpy(reservations[0].date, "2024-10-05");
    reservations[0].id = 1;

    strcpy(reservations[1].fname, "ayoub");
    strcpy(reservations[1].lname, "khalil");
    strcpy(reservations[1].nphone, "0615242301");
    reservations[1].age = 25;
    strcpy(reservations[1].status, "Processed");
    strcpy(reservations[1].date, "2024-10-15");
    reservations[1].id = 2;

    strcpy(reservations[2].fname, "amin");
    strcpy(reservations[2].lname, "bo rhiome");
    strcpy(reservations[2].nphone, "0616187120");
    reservations[2].age = 19;
    strcpy(reservations[2].status, "Postponed");
    strcpy(reservations[2].date, "2024-10-20");
    reservations[2].id = 3;

    strcpy(reservations[3].fname, "Brahim");
    strcpy(reservations[3].lname, "ataibe");
    strcpy(reservations[3].nphone, "0616400589");
    reservations[3].age = 24;
    strcpy(reservations[3].status, "Cancelled");
    strcpy(reservations[3].date, "2024-010-10");
    reservations[3].id = 4;

    strcpy(reservations[4].fname, "oussama");
    strcpy(reservations[4].lname, "en-naji");
    strcpy(reservations[4].nphone, "0694282943");
    reservations[4].age = 23;
    strcpy(reservations[4].status, "Verified");
    strcpy(reservations[4].date, "2024-10-10");
    reservations[4].id = 5;

    strcpy(reservations[5].fname, "Michael");
    strcpy(reservations[5].lname, "Wilson");
    strcpy(reservations[5].nphone, "654987321");
    reservations[5].age = 35;
    strcpy(reservations[5].status, "Processed");
    strcpy(reservations[5].date, "2024-06-12");
    reservations[5].id = 6;

    strcpy(reservations[6].fname, "younrs");
    strcpy(reservations[6].lname, "koghiji");
    strcpy(reservations[6].nphone, "0631745859");
    reservations[6].age = 23;
    strcpy(reservations[6].status, "Postponed");
    strcpy(reservations[6].date, "2024-10-20");
    reservations[6].id = 7;

    strcpy(reservations[7].fname, "oussama");
    strcpy(reservations[7].lname, "wahbi");
    strcpy(reservations[7].nphone, "0645589623");
    reservations[7].age = 19;
    strcpy(reservations[7].status, "Cancelled");
    strcpy(reservations[7].date, "2024-10-19");
    reservations[7].id = 8;

    strcpy(reservations[8].fname, "ayoub");
    strcpy(reservations[8].lname, "hisni");
    strcpy(reservations[8].nphone, "0610477943");
    reservations[8].age = 26;
    strcpy(reservations[8].status, "Verified");
    strcpy(reservations[8].date, "2024-10-11");
    reservations[8].id = 9;

    strcpy(reservations[9].fname, "naaima");
    strcpy(reservations[9].lname, "zahir");
    strcpy(reservations[9].nphone, "0615789643");
    reservations[9].age = 20;
    strcpy(reservations[9].status, "Processed");
    strcpy(reservations[9].date, "2024-10-10");
    reservations[9].id = 10;

    numbreserv = 10; 
}

void addReservation() {
    if (numbreserv >= max_reserv) {
        printf("The reservation list is full!\n");
        return;
    }

    reserv newReserv;
    newReserv.id = numbreserv + 1;

    printf("Enter first name: ");
      scanf("%s", newReserv.fname);
    printf("Enter last name: ");
      scanf("%s", newReserv.lname);
    printf("Enter phone number: ");
      scanf("%s", newReserv.nphone);
    printf("Enter age: ");
      scanf("%d", &newReserv.age);
    printf("Enter the status (valid/report/annual/trait): ");
      scanf("%s", newReserv.status);
    printf("Enter your reservation date (yyyy-mm-dd): ");
      scanf("%s", newReserv.date);

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
    printf("No reservation found with this ID.\n");
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
       printf("View reservations:\n");
for (int i=0; i<numbreserv; i++){
    printf("___________________________________________\n");
    printf("resrvation id: %d\n",reservations[i].id);
    printf("first name: %s\n",reservations[i].fname);
    printf("last name: %s\n",reservations[i].lname);
    printf("phone number: %s\n",reservations[i].nphone);
    printf("age: %d\n",reservations[i].age);
    printf("reservation status: %s\n",reservations[i].status);
    printf("reservation date: %s\n",reservations[i].date);
    printf("___________________________________________\n");
}
}

void sortReservationsByName() {
    reserv temp;
  for (int i = 0; i < numbreserv - 1; i++) {
  for (int j = i + 1; j < numbreserv; j++){
    if (strcmp(reservations[i].fname, reservations[j].fname) > 0){
                temp = reservations[i];
                reservations[i] = reservations[j];
                reservations[j] = temp;
            }
        }
    }
    printf("The reservations have been sorted by first name.\n");
}

void reservationStatistics() {
    int verified = 0, processed = 0, postponed = 0, cancelled = 0;
    for (int i = 0; i < numbreserv; i++) {
      if (strcmp(reservations[i].status, "Verified") == 0) {
               verified++;
        } else if (strcmp(reservations[i].status, "Processed") == 0) {
               processed++;
        } else if (strcmp(reservations[i].status, "Postponed") == 0) {
               postponed++;
        } else if (strcmp(reservations[i].status, "Cancelled") == 0) {
               cancelled++;
        }
    }
    printf("Reservation Statistics:\n");
    printf("Verified: %d\n", verified);
    printf("Processed: %d\n", processed);
    printf("Postponed: %d\n", postponed);
    printf("Cancelled: %d\n", cancelled);
}

int main() {
    int choice;

    initReservations();

    do {
        printf("\nReservation Management System:\n");
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
