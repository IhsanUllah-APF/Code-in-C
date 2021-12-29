/*
#include<stdio.h>

int main(){

int qty, rate;
float dis = 0.0, totexp;

printf("Enter the quantity and rate : ");
scanf("%d%d", &qty, &rate);

if (qty>1200)
    dis = 10.0/100.0; // 10/100 = 0.1 but demoted to 0 and then promoted to 0.0 and stored in float dis so no discount even if
     // quantity is greater than 1200

totexp = (qty * rate) - (qty * rate * dis);

printf("Your total expense = %f", totexp);

return 0;
}
*/
/*
#include<stdio.h>

int main(){

int bs;
float hra, da, gs;

printf("Enter your basic salary : ");
scanf("%d", &bs);

if (bs<1500)
{
    hra = bs * (10.0/100.0);
    da = bs * (90.0/100.0);
}

else
{
    hra = 500;
    da = bs * (98.0/100.0);
}

gs = bs + hra + da;

printf("The gross salary = Rs. %f", gs);

return 0;
}
*/
/*
#include<stdio.h>

int main()
{   int sp, cp, profit, loss;

    printf("Enter sp and cp : ");
    scanf("%d%d", &sp, &cp);

    if (sp > cp)
    {
        profit = sp - cp;
        printf("You have made a profit of Rs. = %d", profit);
    }

    else
    {
        loss = sp - cp;
        printf("You have incurred a loss of Rs. = %d", loss);
    }

    return 0;
}
*/
/*
#include<stdio.h>

int main()
{

    int a;

    printf("Enter any number : ");
    scanf("%d", &a);

    if(a%2 == 0)
        printf("You have entered an even number");
    else
        printf("You have entered an odd number");

    return 0;
}
*/
/*
#include<stdio.h>

int main()
{
    int r, s, a;

    printf("Enter the three ages : ");
    scanf("%d%d%d", &r, &s, &a);

    if (r < s && r < a)
        printf("r is the youngest");

    if (s < r && s < a)
        printf("s is the youngest");

    else
        printf("a is the youngest");

    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int a, b, c;

    printf("Enter the 3 angles of the triangle : ");
    scanf("%d%d%d", &a, &b, &c);

    if(a+b+c == 180) // L.H.S of == can contain more than 1 variable, constant or expression.
        printf("The triangle is a valid triangle ");

    else
        printf("The triangle is invalid");

    return 0;
}
*/

#include<stdio.h>

int main()
{
    int a, k = 0;

    printf("Enter a number : ");
    scanf("%d", &a);

    if (a>0)
        printf("\nThe absolute value of the number = %d", a);

    else
    {
        k = (-1*a);
        printf("\nThe absolute value of the number = %d", k);

    return (0);

    }

}

