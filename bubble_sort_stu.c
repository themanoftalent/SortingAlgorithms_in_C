#include <stdio.h>

int main(void) {
    int numbers[] = {96, 85, 1, 2, 34, 5, 45, 74, 25, 12, 6};
    int length = sizeof(numbers) / sizeof(int);

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
