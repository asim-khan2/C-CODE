#include<stdio.h>
#include<string.h>

struct students{
    int roll;
    float cgpa;
    char name[100];
};


int main () {
    struct students s1;
    s1.roll = 1345;
    s1.cgpa = 7.5;
    strcpy(s1.name, "Asim");

    printf("name is  %s\n",s1.name);
    printf("roll no. is %d\n",s1.roll);
    printf("cgpa is %f\n",s1.cgpa);

    return 0;
}