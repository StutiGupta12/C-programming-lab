#include<stdio.h>

union info {
    int m, r;
    char name[50];
};

int main(void) {
    union info i1;

    printf("Enter name: ");
    scanf("%s", i1.name);

    printf("Enter roll number: ");
    scanf("%d", &i1.r);

    printf("Enter marks: ");
    scanf("%d", &i1.m);

    printf("Name: %s\nRoll Number: %d\nMarks: %d\n", i1.name, i1.r, i1.m);

    return 0;
}