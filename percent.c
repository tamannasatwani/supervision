#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    int chemistry;
    int mathematics;
    int physics;
};

int main() {
    struct Student students[5];
    float percentage;
    int i; 

    for (i = 0; i < 5; i++) {
        printf("Enter details of Student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].roll);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name); // Fixed string input
        printf("Chemistry: ");
        scanf("%d", &students[i].chemistry);
        printf("Mathematics: ");
        scanf("%d", &students[i].mathematics);
        printf("Physics: ");
        scanf("%d", &students[i].physics);
    }

    printf("\nMark Sheets:\n");
    for (i = 0; i < 5; i++) {
        int total = students[i].chemistry + students[i].mathematics + students[i].physics;
        percentage = (total / 3.0);
        printf("\n%s (%d)\n", students[i].name, students[i].roll);
        printf("Chemistry: %d\n", students[i].chemistry);
        printf("Mathematics: %d\n", students[i].mathematics);
        printf("Physics: %d\n", students[i].physics);
        printf("Total: %d\n", total);
        printf("Percent: %.2f%%\n", percentage);
    }
    return 0;
}


