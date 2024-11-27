#include <stdio.h>
#define STUDENTNUM 4

struct student {
    int ID;    
    int score; 
};

int main(void) {
    struct student s[STUDENTNUM]; 
    int i;
    int total = 0; 
    int maxScore = 0; 
    int maxIndex = 0;

    for (i = 0; i < STUDENTNUM; i++) {
        printf("Input the ID: ");
        scanf("%d", &s[i].ID);
        printf("Input the score: ");
        scanf("%d", &s[i].score);

        total += s[i].score;

        if (s[i].score > maxScore) {
            maxScore = s[i].score;
            maxIndex = i;
        }
    }

    double average = total / (double)STUDENTNUM;
    printf("The average of the score: %.6f\n", average);10
    printf("The highest score - ID: %d, score: %d\n", s[maxIndex].ID, s[maxIndex].score);

    return 0;
}
