#include <stdio.h>

#define BUFFER_SIZE 5

int buffer[BUFFER_SIZE];
int head = 0, count = 0;

void insertSample(int value) {
    buffer[head] = value;
    head = (head + 1) % BUFFER_SIZE;
    if (count < BUFFER_SIZE)
        count++;
}

void printSamples() {
    int i;
    int index = (head + BUFFER_SIZE - count) % BUFFER_SIZE;

    printf("Stored samples (oldest → newest): ");
    for (i = 0; i < count; i++) {
        printf("%d ", buffer[(index + i) % BUFFER_SIZE]);
    }
    printf("\n");
}

int main() {
    int value, choice;

    while (1) {
        printf("\n1. Insert sample\n2. Print samples\n3. Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter sensor value: ");
            scanf("%d", &value);
            insertSample(value);
        } else if (choice == 2) {
            printSamples();
        } else {
            break;
        }
    }

    return 0;
}
