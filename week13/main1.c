#include <stdio.h>

struct student {
    int id;            
    char name[50];    
    float grade;   
};

int main(void) {
    struct student s1 = {23, "Daeun", 3.8}; 

    s1.id = 24;
    sprintf(s1.name, "Daeun"); 
    s1.grade = 4.3;


    printf("ID: %d\n", s1.id);
    printf("name: %s\n", s1.name);
    printf("grade: %.2f\n", s1.grade);

    return 0;
}
