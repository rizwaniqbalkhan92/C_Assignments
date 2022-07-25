#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    char name[20];
    int subjectNumber = 5, classNum, subjectNum;
    float urdu, physics, chemistry, english, computer, biology, sindhi, pst, islamiat, maths, total, percentage;

    printf("======================ABC GRAMMAR SCHOOL========================");
    printf("Enter Your Name  \n ");
    scanf("%s", &name);
    printf("Choose Class \n 1) Class 9th \n 2) Class 10th ");
    scanf("%d", &classNum);

    if (classNum == 1)
    {
        printf("Please Choose Domain \n 1) Computer Science \n 2) Biology");
        scanf("%d", &subjectNum);
        printf("Enter Your Sindh Marks \n ");
        scanf("%f", &sindhi);
        printf("Enter Your Chemistry Marks \n ");
        scanf("%f", &chemistry);
        printf("Enter Your Pakistan Studies Marks \n ");
        scanf("%f", &pst);
        printf("Enter Your English Marks \n ");
        scanf("%f", &english);
        if (subjectNum == 1)
        {
            printf("Enter Your Computer Science Marks \n ");
            scanf("%f", &computer);
            total = sindhi + english + pst + chemistry + computer;
            percentage = (total / 500) * 100;
            printf("Your percentage is : %f  \n", percentage);
        }
        else if (subjectNum == 2)
        {
            printf("Enter Your Biology  Marks \n ");
            scanf("%s", &biology);
            total = sindhi + english + pst + chemistry + biology;
            percentage = (total / 500) * 100;
            printf("Your percentage is : %f  \n", percentage);
        }
        else
        {
            printf("Please Choose Correct Subject Number \n ");
        }
    }
    else if (classNum == 2)
    {

        printf("Enter Your Urdu Marks \n ");
        scanf("%f", &urdu);
        printf("Enter Your Islamiat Marks \n ");
        scanf("%f", &islamiat);
        printf("Enter Your Physics Marks \n ");
        scanf("%f", &physics);
        printf("Enter Your Maths Marks \n ");
        scanf("%f", &maths);
        printf("Enter Your English Marks \n ");
        scanf("%f", &english);
        total = urdu + english + islamiat + physics + maths;
        percentage = (total / 500) * 100;
        printf("Your percentage is : %f  \n", percentage);
    }
    else
    {
        printf("Please Enter Correct Number 1 or 2");
    }
    if (percentage >= 90)
    {
         printf("Congratulation %s A++ grade",name);
    }
    else if (percentage >= 80 && percentage < 90)
    {
        printf("Congratulation %s A+ grade",name);
    }
    else if (percentage >= 70 && percentage < 80)
    {
       printf("Congratulation %s A grade",name);
    }
    else if (percentage >= 60 && percentage < 70)
    {
        printf("Congratulation %s B grade",name);
    }
    else if (percentage >= 50 && percentage < 60)
    {
       printf("Congratulation %s C grade",name);
    }
    else if (percentage >= 40 && percentage < 50)
    {
        printf("Congratulation %s D grade",name);
    }
    else
    {
        printf(" Sorry..!   %s You are  FAIL  \n , Don't Worry try next time",name);
    }
}