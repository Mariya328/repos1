#include <stdio.h>
#include <windows.h>

void print1_10() {
    int a = 1;
    do {
        printf("%d ", a);
        a += 1;
    } while (a <= 10);
}

void print10_1() {
    int a = 10;
    do {
        printf("%d ", a);
        a -= 1;
    } while (a >= 1);
}

void print5odds() {
    int a = 1;
    int i = 1;
    do {
        printf("%d ", a);
        a += 2;
        i += 1;
    } while (i <= 5);
}

void print100_10_while() {
    int a = 100;
    while (a >= 10) {
        printf("%d ", a);
        a -= 10;
    }
}

void print1000_100_while() {
    int a = 1000;
    while (a >= 100) {
        printf("%d ", a);
        a -= 100;
    }
}
void print1000_21_while() {
    int a = 1000;
    while (a >= 21) {
        printf("%d ", a);
        a -= 21;
    }
}

void main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;
    do {
        printf("\n");
    

        scanf_s("%d", &n);

        switch (n) {
        case 1:
            print1_10();
            break;
        case 2:
            print10_1();
            break;
        case 3:
            print5odds();
            break;
        case 11:
            print100_10_while();
            break;
        case 12:
            print1000_100_while();
            break;
        case 20:
            print1000_21_while();
        }
    } while (n != 0);
}