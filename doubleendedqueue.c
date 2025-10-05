#include <stdio.h>
#include <stdlib.h>

#define MAX 5
int dqueue_arr[MAX];
int left = -1, right = -1;

// Function declarations
void insert_left();
void insert_right();
void delete_left();
void delete_right();
void display_queue();

int main()
{
    int choice;

    while (1) {
        printf("\n____________ Double-Ended Queue Menu ___________\n");
        printf("1. Insert at Front\n");
        printf("2. Insert at Rear\n");
        printf("3. Delete from Front\n");
        printf("4. Delete from Rear\n");
        printf("5. Display Deque\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insert_left();
                break;
            case 2:
                insert_right();
                break;
            case 3:
                delete_left();
                break;
            case 4:
                delete_right();
                break;
            case 5:
                display_queue();
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice, try again.\n");
        }
    }
    return 0;
}

// Insert element at the rear end
void insert_right()
{
    int added_item;
    if ((left == 0 && right == MAX - 1) || (left == right + 1)) {
        printf("Queue is full\n");
        return;
    }
    if (left == -1) { // first element
        left = 0;
        right = 0;
    } else if (right == MAX - 1) {
        right = 0;
    } else {
        right = right + 1;
    }

    printf("Input the element: ");
    scanf("%d", &added_item);
    dqueue_arr[right] = added_item;
}

// Insert element at the front end
void insert_left()
{
    int added_item;
    if ((left == 0 && right == MAX - 1) || (left == right + 1)) {
        printf("Queue is full\n");
        return;
    }
    if (left == -1) { // first element
        left = 0;
        right = 0;
    } else if (left == 0) {
        left = MAX - 1;
    } else {
        left = left - 1;
    }

    printf("Input the element: ");
    scanf("%d", &added_item);
    dqueue_arr[left] = added_item;
}

// Delete element from front end
void delete_left()
{
    if (left == -1) {
        printf("Queue is empty\n");
        return;
    }

    printf("Deleted element is %d\n", dqueue_arr[left]);

    if (left == right) { // only one element left
        left = -1;
        right = -1;
    } else if (left == MAX - 1) {
        left = 0;
    } else {
        left = left + 1;
    }
}

// Delete element from rear end
void delete_right()
{
    if (left == -1) {
        printf("Queue is empty\n");
        return;
    }

    printf("Deleted element is %d\n", dqueue_arr[right]);

    if (left == right) { // only one element left
        left = -1;
        right = -1;
    } else if (right == 0) {
        right = MAX - 1;
    } else {
        right = right - 1;
    }
}

// Display the queue
void display_queue()
{
    int front_pos = left, rear_pos = right;

    if (left == -1) {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements: ");

    if (front_pos <= rear_pos) {
        while (front_pos <= rear_pos) {
            printf("%d ", dqueue_arr[front_pos]);
            front_pos++;
        }
    } else {
        while (front_pos <= MAX - 1) {
            printf("%d ", dqueue_arr[front_pos]);
            front_pos++;
        }
        front_pos = 0;
        while (front_pos <= rear_pos) {
            printf("%d ", dqueue_arr[front_pos]);
            front_pos++;
        }
    }
    printf("\n");
}