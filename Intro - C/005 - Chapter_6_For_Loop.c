/*
// Nesting of For Loops.
#include<stdio.h>
int main()
{
    int r, c, sum;

    for(r=1; r<=3; r++)
    {
        for(c=1; c<=2; c++)
        {
            sum = r+c;
            printf("r = %d c = %d\n sum = %d \n", r,c,sum);
        }

    }

    return 0;
}
*/
/*
// BREAK in a Single While Loop
#include<stdio.h>
int main()
{
    int num, i;

    printf("Enter a number : ");
    scanf("%d", &num);

    i = 2;

    while(i <= num - 1)
    {
        if(num % i == 0)
        {
            printf("The number %d is not a prime number", num);
            break;
        }

        else // We can remove the else and just write i++; and the same output will be obtained.
            i++;
    }

    if(num == i)
        printf("The number %d is a prime number ", num);

    return 0;
}
*/
/*
// Break in 2 While Loops
#include<stdio.h>
int main()
{
    int i = 1, j = 1;

    while(i++ <= 100)
    {
        while(j++ <= 200)
        {
            if(j == 150)
            break;

            else
            printf("%d %d,  ", i, j);
        }
    }

    return 0;
}
*/

/*
// Break in 2 For Loops:
#include<stdio.h>
int main()
{
    int i, j;

    for(i = 1; i++ <= 100;)
    {
        for(j = 1; j++ <= 200;)
        {
            if(j == 150)
                break;

            else
                printf("%d %d, ", i, j);
        }

    }

    return 0;
}
*/
/*
// Continue in 2 For Loops:
#include<stdio.h>
int main()
{
    int i, j;

    for(i = 1; i <= 2; i++)
    {
        for(j = 1; j <= 2; j++)
        {
            if(i == j)
                continue;

            printf("%d %d,", i, j);
        }

    }

    return 0;
}
*/
/*
// BREAK in 2 while loops - EXTRA WORK NOT IN THE BOOK
#include<stdio.h>
int main()
{
    int i = 1, j = 1;

    while(i++ <= 5)       // i=2 / i=2 / i=2 / i=2 / i=2 / i=2 / i=3 / i=4 / i=5 / i=6 / i=7 / ... exit the outer loop.
    {
        while(j++ <= 10) // j=2 / j=3 / j=4 / j=5 / j=6 / j=7 / j=8 / j=9 / j=10 / j=11 / j=12 / j=13 / j=14 / j=15 /
        {
            if(j == 7)  // j=2 / j =3 / j =4 / j=5 / j=6 / j=7 / j=8 / j=9 / j=10 / j=11 /
                break; // BREAK

            else
                printf("%d %d, ", i,j); // 2,2 / 2,3 / 2,4 / 2,5 / 2,6 / 3,8 / 3,9 / 3,10 / 3, 11 / ... print output

            //j++;
        }

        //i++;
    }
    return 0;
}
*/
/*
// Exercises: Find out Prime Numbers between 1 and 300 using For Loops
#include<stdio.h>

int main()
{
    int num, i;

    for(num = 1; num <= 300; num++)
    {
        if(num == 1)
        //{
            printf("%d, ", num);
            continue;
        //}


        for(i = 2; i <= num-1; i++)
        {
            if(num % i == 0)
                break;
        }

        if(num == i && num != 2)
            printf("%d, ", num);
    }

    return 0;
}
*/
/*
// Finding Prime Numbers between 1 and 300 using While Loops
#include<stdio.h>
int main()
{
    int num, i;

    num = 1;
    while(num <= 300)
    {
        i = 2;
        while(i < num)
        {
            if(num % i == 0)
                break;

            else
                i++;
        }
            if(num == i)
                printf("%d, ", num);

            num++;
    }
    return 0;
}
*/
/*
// Screen full of Smiley Faces
#include<stdio.h>
int main()
{
    int a, j;

    for(a = 1, j = 1; j <= 20000;)
    {
        printf("%c", a);

        j++;
    }
    return 0;
}
*/
/*
// Screen Full of Smiley Faces from Solution Manual
#include<stdio.h>
int main()
{
    int a = 1, r, c;

    for(r = 0; r <= 24; r++) // will fill smiley faces row wise 24 times
    {
        for(c = 0; c <= 79; c++) // will fill column wise smiley faces 79 times
        {
            printf("%c", a);
        }

    }
    return 0;
}
*/
/*
// Add 1/1!, 2/2!, ... , 7/7!
#include<stdio.h>
int main()
{   int num, i;
    float fact, sum = 0.0;

    for(num = 1; num <= 7; num++)
    {
        for(i = 1, fact = 1.0; i <= num; i++)
        {
            fact = fact * i;

        }
        sum = sum + num / fact;
    }
        printf("%f, ", sum);
        return 0;
}
*/
/*
// for two (pair) combinations of 1, 2, and 3.
#include<stdio.h>
int main()
{
    int i, j;

    for(i = 1; i <= 3; i++)
    {
        for(j = 1; j <= 3; j++)
        {
            printf("%d %d, ", i, j);
        }
    }

    return 0;
}
*/
/*
// for three combinations of 1, 2, and 3.
#include<stdio.h>
int main()
{
    int i, j, k;

    for(i = 1; i <= 3; i++)
    {
        for(j = 1; j <= 3; j++)
        {
            for(k = 1; k <= 3; k++)
            {
                printf("%d %d %d, ", i, j, k);
            }

        }
    }
    return 0;
}
*/
/*
// Multiplication Table of a Number entered by a user
#include<stdio.h>
int main()
{
    int num, i, table;

    printf("Enter a Number for Multiplication Table : ");
    scanf("%d", &num);

    for(i = 1; i <= 20; i++)
    {
        table = num * i;
        printf("%d * %d = %d \n", num, i, table);
    }
    return 0;
}
*/
/*
// Intelligence Level:
#include<stdio.h>
int main()
{
    int y;
    float x, i;

    for(y = 1; y <= 6; y++)
    {
        for(x = 5.5; x <= 12.5; x++) // To increment x by 0.5 rather than 1, use x+=0.5 rather than x++
        {
            i = 2 + (y + 0.5 * x);

            printf("i = %f  y = %d  x = %f \n", i, y, x);
        }
    }
    return 0;
}
*/
/*
// To compute principal amount based on compound interest rate
// Note: Solution Manual has done it really easy by asking the user inputs and then using the power function.
#include<stdio.h>
int main()
{
    int p, q, n, k, m;
    float r, a;

    for(p = 1000, r = 0.10, n = 1, q = 1; p <= 10000, r <= 0.2, n <= 11, q <= 10; p += 1000, r += 0.01, n++, q++)
    {
        k = n * q, a = 1;
        for(m = 1; m <= k; m++)
        {
            a = a * (1 + r/q);

        }

        a = a * p;

        printf("%f, ", a);
    }

    return 0;

}
*/
/*
// Finding population 10 years ago:
#include<stdio.h>
#include<math.h>
int main()
{
    int p2, n;
    float p1, r;

    p2 = 100000;
    r = 0.10;

    for(n = 10; n >= 0; n--)
    {
        p1 = p2 / pow((1 + r), n);

        printf("Population %d years ago = %f\n", n, p1);
    }

    return 0;
}
*/
/*
// 24 hour day pattern:
#include<stdio.h>
int main()
{
    int hr;

    for(hr = 0; hr <= 23; hr ++)
    {
        if(hr == 0)
        {
           printf("12 AM Midnight\n");
            continue;
        }


        else if(hr <= 11)
            printf("%d AM\n", hr);

        else if(hr == 12)
            printf("%d PM Midnoon\n", hr); // Instead of creating string variable for Midnoon or Midnight, they have been
                                        // used in the printf command.
        else
            printf("%d PM\n", hr % 12); // Modulus operator used to convert 24 hour format to 12 hour format.
    }

    return 0;

}
*/

// To produce integers in a pyramid pattern: COULD NOT SOLVE AND UNDERSTAND THIS PROBLEM
#include<stdio.h>
int main()
{
    int i,j,k,l,sp;

    sp = 20;

    for(i = 1, k = 1; i < 5; i++)
    {
        for(l = 1; l <= sp; l++)
            printf(" ");
        sp -= 2;

        for(j = 1; j <= 1; j++, k++)
            printf("%d ", k);

        printf("\n");
    }



return 0;
}



























































































































