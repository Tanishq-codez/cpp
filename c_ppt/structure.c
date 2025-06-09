#include <stdio.h>

int main() {
    char name[3][10];
    float price[3];
    int pages[3];
    int i;

    printf("\nEnter names, prices, and pages of 3 books:\n");

    for(i = 0; i < 3; i++) {
        scanf("%s %f %d", &name[i], &price[i], &pages[i]);
    }

    printf("\nYou entered:\n");

    for(i = 0; i < 3; i++) {
        printf("%s %.2f %d\n", name[i], price[i], pages[i]);
    }

    return 0;
}
