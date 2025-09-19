#include<stdio.h>
#include<conio.h>

int main() {
    int i, j;
    char ch = 'A';   // Starting character

    for (i = 0; i < 5; i++) {        // 5 rows
        for (j = 0; j <= i; j++) {   // (row number + 1) times
            printf("%c", ch + i);
        }
        printf("\n");
    }

    return 0;
}
