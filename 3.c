#include <stdio.h>
#include <string.h>

#define MAX_EVENTS 50

// structure for an event
struct Event {
    char name[50];
    char date[20];
    char location[50];
};

int main() {
    struct Event events[MAX_EVENTS];
    int count = 0;
    int choice;

    while (1) {
        printf("\n===== EVENT PLANNING SYSTEM =====\n");
        printf("1. Add Event\n");
        printf("2. List Events\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();  // to clear input buffer

        if (choice == 1) {
            if (count < MAX_EVENTS) {
                printf("Enter Event Name: ");
                fgets(events[count].name, sizeof(events[count].name), stdin);
                events[count].name[strcspn(events[count].name, "\n")] = 0;

                printf("Enter Event Date (DD/MM/YYYY): ");
                fgets(events[count].date, sizeof(events[count].date), stdin);
                events[count].date[strcspn(events[count].date, "\n")] = 0;

                printf("Enter Event Location: ");
                fgets(events[count].location, sizeof(events[count].location), stdin);
                events[count].location[strcspn(events[count].location, "\n")] = 0;

                count++;
                printf("Event added successfully!\n");
            } else {
                printf("Event list full!\n");
            }
        } 
        
        else if (choice == 2) {
            if (count == 0) {
                printf("No events added yet.\n");
            } else {
                printf("\n--- List of Events ---\n");
                for (int i = 0; i < count; i++) {
                    printf("Event %d:\n", i + 1);
                    printf(" Name: %s\n", events[i].name);
                    printf(" Date: %s\n", events[i].date);
                    printf(" Location: %s\n", events[i].location);
                }
            }
        } 
        
        else if (choice == 3) {
            printf("Exiting...\n");
            break;
        } 
        
        else {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}