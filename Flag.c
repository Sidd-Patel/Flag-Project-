#include <stdio.h>

// Define ANSI escape codes for colors
#define RESET   "\x1b[0m"
#define SAFFRON "\x1b[48;5;208m" // Saffron color
#define WHITE   "\x1b[47m"
#define GREEN   "\x1b[42m"
#define BLUE    "\x1b[44m"

// Function to print the flag
void printFlag() {
    int i, j;
    
    // Top saffron rectangle
    for (i = 0; i < 3; i++) {
        printf(SAFFRON);
        for (j = 0; j < 30; j++) {
            printf(" ");
        }
        printf(RESET "\n");
    }

    // Middle white rectangle with blue Ashoka Chakra
    for (i = 0; i < 6; i++) {
        printf(WHITE);
        for (j = 0; j < 30; j++) {
            if (i == 2 && j >= 12 && j <= 17) {
                // Simple representation of Ashoka Chakra
                if (j == 14) {
                    printf(BLUE "O");
                } else {
                    printf(WHITE " ");
                }
            } else {
                printf(WHITE " ");
            }
        }
        printf(RESET "\n");
    }

    // Bottom green rectangle
    for (i = 0; i < 3; i++) {
        printf(GREEN);
        for (j = 0; j < 30; j++) {
            printf(" ");
        }
        printf(RESET "\n");
    }
}

int main() {
    printFlag();
    return 0;
}