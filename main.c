#include <stdio.h>
#include <string.h>

struct student {
    int    ID;
    char   name[10];
    double grade;
};

int main(void) {
    struct student s1;

    s1.ID = 123456;
    strcpy(s1.name, "Juyeop");   // 문자열은 = 대신 strcpy
    s1.grade = 4.2;

    printf("ID : %d\n", s1.ID);
    printf("name : %s\n", s1.name);
    printf("grade : %f\n", s1.grade);
    return 0;
}