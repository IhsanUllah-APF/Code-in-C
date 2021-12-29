/*
#include<stdio.h>

int main()
{
    int m1, m2, m3, m4, m5, avg;

    printf("Enter the marks of the five subjects : ");

    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);

    avg = (m1+ m2+ m3+ m4+ m5)/5;

    printf("\n\nYour average marks are = %d\n\n", avg);

    if (avg >= 60)
        printf("\nYou have achieved a First division \n\n");

    if (avg>=50 && avg<=59)
        printf("You have achieved a Second division \n\n");

    if (avg>=40 && avg<=49)
        printf("You have achieved a Third division \n\n");

    if (avg<40)
        printf("You have Failed \n\n");

    return(0);
}
*/
/*
#include<stdio.h>

int main()

{
    int m1, m2, m3, m4, m5, avg;

    printf("Enter your marks in the five subjects : ");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);

    avg = (m1 + m2 + m3 + m4 + m5)/5;
    printf("\n\nYour average marks are = %d", avg);

    if(avg>=60)
        printf("\n\nYou have achieved a First Division\n\n");
    else
    {
        if(avg>=50 && avg<=59)
            printf("\n\nYou have achieved a Second Division\n\n");
        else
        {
            if(avg>=40 && avg<=49)
                printf("\n\nYou have achieved a Third Division\n\n");
            else
            {
                printf("\n\nYou have failed the course\n\n");
            }
        }
    }
    return(0);
}
*/
/*
//Creeps to the right. Too many if and else and braces to match

#include<stdio.h>

int main()

{
    char sex, ms;
    int age;

    printf("Enter your age, sex, and marital status : ");
    scanf("%d %c %c",&age,&sex,&ms);

    //printf("\nThe input MS is: %c",ms);

    if(ms=='M')
        printf("\nThe driver should be insured.\n");

    else
    {
        if(sex=='M')
        {
            if(age>30)
                printf("\nThe driver should be insured.\n");

            else
                printf("\nThe driver should not be insured.\n");
        }
        else
        {
            if(age>25)
                printf("\nThe driver should be insured.\n");

            else
                printf("\nThe driver should not be insured.\n");
        }
    }

    return 0;
}
*/
/*
// All if is to be checked even if the first one is found true. More executation time. It can contain all ifs without else or
it may contain else at the end which will be connected to the last if only. The better alternative is else if.
#include<stdio.h>

int main()

{
    char sex, ms;
    int age;

    printf("Enter your age, sex, and marital status : ");
    scanf("%d %c %c", &age, &sex, &ms);

    if(ms == 'M')
       printf("\nThe driver should be insured. \n");

    if(ms == 'U' && sex == 'M' && age>30)
        printf("\nThe driver should be insured. \n");

    if(ms == 'U' && sex == 'F' && age>25)
        printf("\nThe driver should be insured. \n");

    else // this else is connected with the last if. if the last if is false, then this else will be printed.
        printf("\nThe driver should not be insured. \n");

    return (0);
}
*/
/*
// Else if stops evaluating other options when found one of them to be true. The last else is not executed if any one the options
// is true. Like above, it is not connected only to the last if (in this case to the last else if).
#include<stdio.h>

int main()

{
    int age;
    char sex, ms;

    printf("Enter your age, sex and marital status ; ");
    scanf("%d %c %c", &age, &sex, &ms);

    //printf("\nThe input in ms is: %c",ms);

    if(ms == 'M')
        printf("\nThe driver should be insured.");

    else if(ms == 'U' && sex == 'M' && age>30)
        printf("\nThe driver should be insured.");

    else if(ms == 'U' && sex == 'F' && age>25)
        printf("\nThe driver should be insured.");

    else // The last else is optional.
        printf("\nThe driver should not be insured.");

    return (0);
}
*/
/*
#include<stdio.h>

int main()

{
    int age;
    char sex, ms;

    printf("Enter your age, sex, and marital status : ");
    scanf("%d %c %c", &age, &sex, &ms);

    if ((ms == 'M')|| (ms == 'U' && sex == 'M' && age>30) || (ms == 'U' && sex == 'F' && age>25))
        printf("\nThe driver should be insured.");

    else
        printf("\nThe driver should not be insured.");

    return (0);
}
*/
/*
#include<stdio.h>

int main()

{
    char gend;
    int yos, sal, qual; // 0 for graduate and 1 post-graduate

    printf("Enter your gender, yos, and qual. : ");
    scanf("%c%d%d", &gend, &yos, &qual);

    if(gend == 'M' && yos >= 10 && qual == 1)
        sal = 15000;

    else if(gend == 'M' && yos >= 10 && qual == 0)
        sal = 10000;

    else if(gend == 'M' && yos < 10 && qual == 1)
        sal = 10000;

    else if(gend == 'M' && yos <10 && qual == 0)
        sal = 7000;
    else if(gend == 'M' && yos >=10 && qual == 1)
        sal = 15000;

    else if(gend == 'F' && yos >=10 && qual == 1)
        sal = 12000;

    else if(gend == 'F' && yos >=10 && qual == 0)
        sal = 9000;

    else if(gend == 'F' && yos < 10 && qual == 1)
        sal = 10000;

    else if(gend == 'F' && yos < 10 && qual == 0)
        sal = 6000;

    printf("\nYour salary is = Rs. %d\n", sal);

    return 0;
}
*/
/*
#include<stdio.h>

int main()
{
    char character;
    printf(" Enter a character : ");
    scanf("%c", &character);

    if(character >= 65 && character <= 90)
        printf("You have entered a capital letter = %c", character);

    else if(character >= 97 && character <= 122)
        printf("You have entered a small letter = %c", character);

    else if(character >= 48 && character <= 57)
        printf("You have entered a digit = %c", character);

    else if((character >= 0 && character <= 47) || (character >= 58 && character <= 64) || (character >= 91 && character <= 96) ||
        (character >= 123 && character <= 127))
        printf("You have entered a special symbol = %c", character);

    return 0;
}
*/
/*
#include<stdio.h>

int main()
{
    int h, ts;
    float cc;

    printf("Please enter the hardness, carbon content, and tensile strength : \n");
    scanf("%d %f %d", &h, &cc, &ts);

    if(h>50 && cc<0.7 && ts>5600)
        printf("The steel has 10 grade");

    else if(h>50 && cc<0.7 && ts<5600)
        printf("The steel has 9 grade");

    else if(h<50 && cc<0.7 && ts>5600)
        printf("The steel has 8 grade");

    else if(h>50 && cc>0.7 && ts>5600)
        printf("The steel has 7 grade");

    else if((h>50 && cc>0.7 && ts<5600) || (h<50 && cc<0.7 && ts<5600) || (h<50 && cc>0.7 && ts>5600))
        printf("The steel has 6 grade");

    else if(h<50 && cc>0.7 && ts<5600)
        printf("The steel has 5 grade");

    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int s1, s2, s3;

    printf("Enter the three sides of the triangle ; ");
    scanf("%d%d%d", &s1, &s2, &s3);

    if(s1>s2 && s1>s3 && s2+s3 > s1)
    {
      printf("The triangle is a valid triangle\n");
      printf("s1 = %d, s2 = %d, s3 = %d", s1, s2, s3);
    }

    else if(s2>s1 && s2>s3 && s1+s3 > s2)
        printf("The triangle is a valid triangle");

    else if(s3>s1 && s3>s2 && s1+s2 > s3)
        printf("The triangle is a valid triangle");

    else
        printf("The triangle is not a valid triangle");

    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int wgt;

    printf("Enter the weight of a boxer : ");
    scanf("%d", &wgt);

    if(wgt<115)
        printf("The boxer is Flyweight");

    else if(wgt>=115 && wgt<=121)
        printf("The boxer is Bantamweight");

    else if(wgt>=122 && wgt<=153)
        printf("The boxer is Featherweight");

    else if(wgt>=154 && wgt<=189)
        printf("The boxer is Middleweight");

    else if(wgt>=190)
        printf("The boxer is Heavyweight");

    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int date, month;

    printf("Enter your date and month of birth :");
    scanf("%d%d", &date, &month);

    if((month == 1 && date >=1 && date <= 19) || (month == 12 && date >= 22 && date <=31))
        printf("Your Zodiac sign is Capricorn");

    else if((month == 1 && date >=20 && date <= 31) || (month == 2 && date >= 1 && date <=17))
        printf("Your Zodiac sign is Aquarius");

    else if ((month == 2 && date >=18 && date <= 29) || (month == 3 && date >= 1 && date <= 19))
        printf("Your Zodiac sign is Pisces");

    else if ((month == 3 && date >=20 && date <= 31) || (month == 4 && date >= 1 && date <= 19))
        printf("Your Zodiac sign is Aries");

    else if ((month == 4 && date >=20 && date <= 30) || (month == 5 && date >= 1 && date <= 20))
        printf("Your Zodiac sign is Taurus");
    // continue in the same manner for the rest of the months as well.
    else
        printf("You have entered wrong data");
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    char k;

    printf("Enter a character : ");
    scanf("%c", &k);

    (k >= 97 && k <= 122)? printf("You have entered a small case latter, %c", k): printf("You have entered something else");

    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    char k;

    printf("Enter a character : ");
    scanf("%c", &k);
   (k >= 0 && k <= 47 || k >= 58 && k <= 64 || k >= 91 && k <= 96 || k >= 123 && k <= 127) ?
   printf("You have entered a special symbol, %c", k): printf("You have entered something different");

return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int a, b, c;

    printf("Enter three numbers : ");
    scanf("%d%d%d", &a, &b, &c);

    (a>b && a>c)? printf("The a is the largest"): (b>a && b>c ? printf("The b is the largest"):
    c>a && c>b ? printf(" The c is the largest"): printf("You are stupid"));

    return 0;

}
*/
/*
#include<stdio.h>
int main()
{
    int sal;

    printf("Enter your salary : ");
    scanf("%d", &sal);
    printf("\n%d\n\n", sal);

    (sal >= 25000 && sal <= 40000) ? printf("Manager") : (sal >= 15000 && sal < 25000 ? printf("Accountant") :
    sal < 15000 ? printf("Clerk") : printf("You have entered wrong data"));

return 0;
}
*/
/*
//Just Some Basic Pointer Discussion. The rest of the content in this file belongs to chapter 4.
#include<stdio.h>
int main()
{
    int i = 3;
    int *j = &i, **k = &j; // ** for the second pointer. Otherwise, getting warning though program still runs.


    printf("The value in the variable i = %d\n", i);

    printf("The address of the variable i = %u\n", &i);

    printf("The value in the pointer j = %u\n", j);

    printf("The address of the pointer j = %u\n", &j);

    printf("The value in the pointer k = %u\n", k);

    printf("The address of the pointer k = %u\n", &k);

return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int i=4, j=-1, k=0, w, x, y, z;

    w = i || j || k;
    x = i && j && k;
    y = i || j && k;
    z = i && j || k;

    printf("w=%d x=%d y=%d z=%d", w, x, y,z);

return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int i = -1, j = 1, k, l;

    k = !i && j;
    l = !i || j;

    printf("i = %d j = %d", i, j);

return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int i = -4, j, num;

    j = (num < 0 ? 0 : num * num);

    printf("%d\n", j);

return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int k, num = 30;
    k = (num > 5 ? (num <= 10 ? 100 : 200) : 500);

    printf("%d\n", num);

return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int code, flag;
    code =1, flag = 2;
    if( code == 1 && flag == 0)
        printf("The eagle has landed\n");

    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int j = 65;

    printf("j >= 65 ? %d : %c\n", j);

return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int i = 10, j;
    i >= 5 ? j = 10 : (j = 15);
    printf("%d %d", i, j);

return 0;
}
*/
#include<stdio.h>
int main()
{
    int emp = 1, extra_hrs;
    float rate = 12.0, overtime_pay;

    while(emp <= 10)
        printf("How many extra hours you have worked this week?\n");
        scanf("%d", &extra_hrs);
        overtime_pay = (extra_hrs * rate);
        printf("Your over time pay = Rs. %f", overtime_pay);

        emp = emp + 1;

    return 0;
}






































































































































