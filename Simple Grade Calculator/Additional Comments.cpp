//Additional Comments
#include <stdio.h>

int main()
{
    int score;
    char grade;

    printf("Enter your score: ");
    scanf("%d", &score);

    grade = (score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' :
            (score >= 40) ? 'E' : 'F';

    printf("Your grade is %c. ", grade);

    switch (grade)
    {
        case 'A':
            printf("Excellent work!");
            break;

        case 'B':
            printf("Well done.");
            break;

        case 'C':
            printf("Good job.");
            break;

        case 'D':
            printf("You passed, but you could do better.");
            break;

        case 'E':
            printf("You passed.");
            break;

        case 'F':
            printf("Sorry, you failed.");
            break;
    }

    return 0;
}
