/*
#include<stdio.h>
int main()
{
    double x = 1.1;

    while(x == 1.1)
        printf("%f\n", x);
        x = x - 0.1;

    return 0;
}
*/
/*
// To calculate overtime pay for 10 employees
#include<stdio.h>
int main()
{
    int emp = 1, extra_hrs;
    float rate = 12.0, overtime_pay;

    while(emp <= 10)
    {
        printf("How many extra hours you have worked this week?\n");
        scanf("%d", &extra_hrs);
        overtime_pay = (extra_hrs * rate);
        printf("\nYour over time pay = Rs. %f\n", overtime_pay);

        emp = emp + 1;
    }
    return 0;
}
*/
/*
// To calculate factorial of a number up to 16
#include<stdio.h>
int main()
{
    int num, i = 1, fact = 1;
    /* fact is an integer variable and can store a number upto a billion (10 digits) which is 16 factorial (17 factorial
    gives minus and wrong answer most likely due to storage limitation). If we want more storage capacity for the variable fact
    then we should declare it as: unsigned long int fact. Unsigned means it will store only positive values. Unsigned and long
    will double its capacity or at least significantly increase it)*/
/*
    printf("Enter a number : ");
    scanf("%d", &num);

    while(i <= num)
    {
        fact = fact * i;

        i++;
    }

    printf("\nThe number = %d, and its factorial = %d", num, fact);

    return 0;
}
*/
/*
#include<stdio.h>
int main()

{
  int n1, n2, value = 1, i =1;

  printf("Enter two numbers : ");
  scanf("%d%d", &n1, &n2);

  while(i <= n2)
  {
      value = value * n1;
        i++;
  }
  printf("n1 = %d n2 = %d, and value = %d", n1, n2, value);

  return 0;
}
*/
/*
// To obtain ASCII values and their related characters
#include<stdio.h>
int main()
{
    int i=0;

    while(i <= 255)
    {
         printf("%d %c ", i, i);
        i++;
    }

    return 0;
}
*/
/*
// to find armstrong number between 1 and 500
#include<stdio.h>
int main()
{
    int num = 1, a, b, c;

    while (num <= 500)
    {
        a = num % 10; // to extract the last digit
        b = num % 100;
        b = (b-a) / 10; // to extract the second digit
        c = num / 100; // to extract the first digit

        if(num == (c*c*c)+(b*b*b)+(a*a*a)) // Note that if can be written without any else or else if.
            printf("%d\n", num);

        num++;
    }
}
*/
/*
// to calculate positive, negative and zero numbers entered by the user
#include<stdio.h>
int main()
{
    int pos=0, neg=0, zero=0, num;
    char ans = 'y';

    while(ans == 'y' || ans == 'Y')
    {
        printf("\nEnter a number : ");
        scanf("%d", &num);


        if(num>0)
            pos++;
        else if(num<0)
            neg++;
        else
            zero++;

        fflush(stdin); // This command is must. Why?

        printf("\nDo you want to enter another number? : ");
        scanf("%c", &ans);
    }
     printf("\nYou have entered positive numbers = %d times", pos);
     printf("\nYou have entered negative numbers = %d times", neg);
     printf("\nYou have entered zero numbers = %d times", zero);

     return 0;
}
*/

// To compute range of positive values
#include<stdio.h>
int main()
{
    int num, flag = 0, big, small, n, range;

    printf("How many numbers are there in the set? " );
    scanf("%d", &n);

    while(n > 0)
     {

        printf("Enter a number : ");
        scanf("%d", &num);

        if(flag == 0)
        {
          big = small = num;
          flag = 1;
        }
        else
        {
            if(num > big)
                big = num;
            if(num < small)// Note that there are two ifs and no else. So, there can be if without else but there cannot be else
                small = num; // without if
        }
        n--;
     }
    range = big - small;

    if (range<0) // There can be if without else but there can be no else without if.
        range = range * -1;

    printf("the range = %d", range);

    return 0;
}



































