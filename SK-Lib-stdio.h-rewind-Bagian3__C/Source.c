#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by CPPReference (https://en.cppreference.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

char str[20];

int main(void) {
    FILE* f;
    char ch;

    f = fopen("file.txt", "w");
    for (ch = '0'; ch <= '9'; ch++) {
        fputc(ch, f);
    }

    fclose(f);

    f = fopen("file.txt", "r");
    fread(str, 1, 10, f);
    puts(str);

    rewind(f);
    fread(str, 1, 10, f);
    puts(str);
    fclose(f);

    _getch();
    return 0;
}