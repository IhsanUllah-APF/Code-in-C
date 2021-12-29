/*
// Examples from the book.
#include<stdio.h>
void message(); // Prototype declaration of the function message. Return type, name, parenthesis and semicolon.
int main()      // The function main defined. Return types, int, name, main, parenthesis and body within in {}.
{
    message();  // A function call to the function, message. Or, the function message is being called to do his job.

    printf("Cry, and you stop the monotony!\n");
    return 0;   // returning 0 to the function main since its return type is int.
}

void message()
{
    printf("Smile, and the World smiles with you ...\n");
}        // No return type mentioned at the end since the return type has not been declared for this function, message.
*/
/*
// Calling multiple functions from the main.
#include<stdio.h> //stdio.h is a library file containing prototype declaration of related functions such as printf,
                  // scanf etc. Therefore, no library functions require a separate declaration.
void italy();   // Prototype declaration of the function Italy.
void brazil();  // Prototype declaration of the function Brazil.
void argentina(); // Prototype declaration of the function Argentina.

int main()         // definition of the function main.
{
    printf("I am in main \n");
    italy();    // the function Italy is being called by the function main.
    brazil();
    argentina();
    return 0;
}               // the function main ends here.

void italy()    // the definition of the function Italy.
{
    printf("I am in Italy\n");
}               // the function Italy ends here without a return statement due to void (no return type required)

void brazil()
{
    printf("I am in Brazil\n");
}

void argentina()
{
    printf("I am in Argentina \n");
}               // the entire program ends here.
*/
/*
// Calling multiple functions from multiple functions.
#include<stdio.h>
void italy();
void brazil();
void argentina();

int main()
{
    printf("I am in main\n");
    italy();
    printf("I am finally back in main.\n"); // the control will return here from the function, Italy.
    return 0;
}

void italy()
{
    printf("I am in Italy.\n");
    brazil();                       // calling the function Brazil.
    printf("I am back in Italy.\n"); // the control will return here from the function, Brazil.
}

void brazil()
{
    printf("I am in Brazil.\n");
    argentina();                    // calling the function Argentina.

}                                   // the control will return here from the function, Argentina.

void argentina()
{
    printf("I am in Argentina.\n"); // After executing print, the control will return to the calling function, Brazil.
}       // the entire program ends here.
*/
/*
// the function main calling the function message and function message calling the function main, creating infinite loop.
#include<stdio.h>
void message();

int main()
{
    printf("I am in main.\n"); // 1. this gets printed.5. this get printed. 9. this gets printed and it keeps going on.
    message(); // 2. the function message is called. 6. the function message is called.
    printf("I am back in main.\n"); // the control never reach here since it is going back and forth between other steps.
    return 0;
}

void message()
{
    printf("Can't imagine life without C.\n"); // 3. this gets printed. 7. This gets printed.
    main(); // 4. the function main is called. 8. the function main is called.

}
*/
/*
// a function can be called any number of times.
#include<stdio.h>
void message();

int main()
{
    message();
    message();

    return 0;
}

void message ()
{
    printf("Jewel Thief.\n"); // Jewel Thief will be printed twice.
}
*/
/*
// sending and receiving values between functions:

#include<stdio.h>

int calsum(int x, int y, int z);

int main()
{
    int a, b, c, sum;
    printf("Enter any three numbers : ");
    scanf("%d %d %d", &a, &b, &c);

    sum = calsum(a, b, c);

    printf("%d", sum);

    return 0;
}

int calsum(int x, int y, int z)
{
    int d;

    d = x + y + z;

    return d;
}
*/
/*
// passing values between functions:
#include<stdio.h>

void fun(int);

int main()
{
    int a = 30;
    fun(a);         // when this function fun is called, then value of a = 30 is passed to it, so it becomes fun(30).
    printf("%d ", a);
    return 0;
}

void fun(int b) // when this function is run, initially b = 30. So, if there is no b = 60, then 30 30 gets printed.
{               // That means that value 30 stored in a is passed on to the function and stored in b.
    //b = 60; // at this step, it becomes fun(60). But it does not change value in the variable, a.
    printf("%d ", b);
}
*/
/*
//scope rule of functions: Values can pass from one function to another but the variable itself is local/limited only
// to the function in which it is defined. Other functions cannot see it.
#include<stdio.h>

void display(int);

int main()
{
    int i = 20;
    display(i); // the value 20 stored in i gets passed on to the function display and get stored in the variable j.
    return 0;
}

void display(int j)
{
    int k = 35; // the value 35 gets stored in variable k, whereas the value in j, 20, remains unchanged since k is
                // different variable from j.
    printf("%d\n", j);
    printf("%d\n", k);
}
*/

// Order of passing arguments: Sometimes the order does not matter, but sometimes it does.
/*
#include<stdio.h>
int main()
{
    int a = 1;

    printf("%d %d %d", a, ++a, a++);

    return 0;
}
*/
/*
// Write a program to calculate Factorial of a number:
#include<stdio.h>
int factorial(int num);

int main()
{
    int num = 4, b;

    //printf("Enter a number : ");
    //scanf("%d", &num);
    b = factorial(num);
    printf("Factorial of %d is %d", num, b);
    return 0;
}

int factorial(int num)
{
    int fact = 1, i;

    for(i = 1; i <= num; i++)
    {
        fact = fact * i;

    }

    return fact;

}
*/
/*
// Write a program to calculate a power b:
#include<stdio.h>

int power(int a, int b);

int main()
{
    int a, b, ans;

    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);

    ans = power(a, b);

    printf("%d raised to the power %d = %d", a, b, ans);

    return 0;

}

int power(int a, int b)
{
    int k = 1, i;

    for(i = 1; i <= b; i++)
    {
        k = k * a;
    }

    return k;
}
*/
/*
// To compute Unique Prime Factors of a number:

#include<stdio.h>
int primefactor(int);

int main()
{
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    primefactor(num);

    return 0;

}

int primefactor(int num)
{
    int i, k;

    for(i = 2; i <= num - 1; i++)
    {
        if(num % i == 0)
        {
            for(k = 2; k <= i - 1; k++)
            {
                if(i % k == 0)
                    break;
            }

         if(i == k)
            printf("%d is a prime factor of %d\n", i, num);

        }
    }

    return 0;
}
*/
/*
// To compute all Prime Factors of a number:

#include<stdio.h>

int primefactor(int);

int main()
{
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);
    primefactor(num);
    return 0;
}

int primefactor(int num)
{
    int i, k;

    for(i = 2; num != 1;)
    {
        if(num % i == 0) // To determine that i is a factor of the number.
        {
            for(k = 2; k <= i-1; k++) // To determine that the factor found above of the number is indeed a Prime Factor.
            {
                if(i % k == 0) // If the factor i is divisible by any number less than i (denoted by k), then it is not
                    break;  // a prime factor. So break since there is no need to check the factor for other values of k.
            }               // After break, the control will go to if(i == k) and the outer loop will continue from there.
                            // The control will not go to else because if(num % i == 0) was found true. Therefore, on
        }                   // break, the control will exit the entire if body and will skip the else.
        else
        {
            i++;
            continue;
        }

        if(i == k) // typing all these 3 statements within the main For Loop is mandatory.
        printf("%d is a prime factor.\n", i);
        num = num/i;

    }


    return 0;
}
*/

// To compute all Prime Factors of a number using the solution manual method:
#include<stdio.h>
void primefactors(int);
int main()
{
    int num;
    printf("Enter a Number : ");
    scanf("%d", &num);

    primefactors(num);
    return 0;
}

void primefactors(int num)
{
    int i = 2;

    printf("Prime factors of %d are :\n", num);

    while(num != 1)
    {
        if(num % i == 0)
            printf("%d\n", i);

        else
        {
            i++;
            continue;
        }

        num = num/i;
    }

}










































































































































