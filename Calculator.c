#include<stdio.h>

int main()
{
    int score;
    char grade;
    const char *remarks;

    printf("Enter your Score: ");
    scanf("%d",&score);

    grade = (score>=90)
                ? 'A'
                : (score>=80)
                    ? 'B'
                    : (score>=70)
                        ? 'C'
                        : (score>=60)
                            ? 'D'
                            : (score>=50)
                                ? 'E'
                                    : 'F';

    remarks = (score >= 90) 
                ? "Excellent! You are elegible for next level" 
                    : (score >= 80) 
                        ? "Very Good" 
                            : (score >= 70) 
                                ? "Good" 
                                    : (score >= 60) 
                                        ? "Can Do Better!" 
                                            : (score >= 50)  
                                                ? "Better Luck Next Time": "Invalid";

    printf("\nYour Grade is : %c",grade);
    printf("\nRemarks: %s",remarks);

    return 0;
}