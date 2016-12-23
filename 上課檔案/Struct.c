#include <stdio.h>
#include <string.h>
/*
void main() {
    struct Student_Perosnal_Data {
        char name[10];
        int age;
        char address[50];
        char interest[11];
    } stu;
    strcpy(stu.name,"BuleAlice");
    stu.age = 25;
    strcpy(stu.address, "Trangle's home");
    strcpy(stu.interest, "coding");
    printf("The student's name is: %s\n", stu.name);
    printf("The student's age is: %d\n", stu.age);
    printf("The student's address is: %s\n", stu.address);
    printf("The student's interest is: %s\n", stu.interest);
}*/
struct Student_Detail {
    int age;
    char *name;
    char *address;
};
struct Student_Data {
    int stuid;
    struct Student_Detail detail;
};
void main() {
    struct Student_Data x;
    x.stuid = 100;
    x.detail.age = 20;
    x.detail.name = "Johnson Lee";
    x.detail.address = "Nation Chi Nan University";
    printf("%d\n", x.stuid);
}
