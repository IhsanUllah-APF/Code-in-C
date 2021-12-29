
// Chapter 9 - Examples from the chapter, Pointers.
/*
#include<stdio.h>

int main()
{
    int i = 3;

    printf("Address of i = %u\n", &i);
    printf("Value of i = %d\n", i);

    return 0;
}
*/
/*
#include<stdio.h>

int main()
{
    int i = 3;

    printf("Address of i = %u\n", &i);
    printf("Value of i = %d\n", i);
    printf("Value of i = %d\n", *(&i)); // value at address of i (&i) = *(&i).

    return 0;
}
*/
/*
#include<stdio.h>

int main()
{
    int i = 3;
    int *j; // declaration of pointer j. *j points to a value stored at address contained in the pointer j.

    j = &i; // initialization of the pointer j. The pointer j will contain the address of the variable, i.

    printf("Address of i = %u\n", &i);
    printf("Address of i = %u\n", j);
    printf("Address of j = %u\n", &j);
    printf("Value of j = %u\n", j);
    printf("Value of i = %d\n", i);
    printf("Value of i = %d\n",*j);
    printf("Value of i = %d\n",*(&i));

    return 0;

}
*/
/*
// Understanding i, &i, *(&i), j, *j, &j, k, &k, *k, **k.
#include<stdio.h>

int main()
{
    int i = 3, *j, **k; // k is pointer variable, which will contain address of another point variable which will contain
                        // address of an ordinary variable which will contain integer value.
    j = &i;             // This will store address of i in the pointer, j.
    k = &j;             // This will store address of the pointer, j, in the pointer k.

    printf("Address of i = %u\n", &i);
    printf("Address of i = %u\n", j);
    printf("Address of i = %u\n", *k);
    printf("Address of j = %u\n", &j);
    printf("Address of j = %u\n", k);
    printf("Address of k = %u\n", &k);
    printf("Value of j = %u\n", j);
    printf("Value of k = %u\n", k);
    printf("Value of i = %d\n", i);
    printf("Value of i = %d\n",*(&i));
    printf("Value of i = %d\n", *j);
    printf("Value of i = %d\n", **k);

    return 0;
}
*/
/*
// Call by Value Example:

#include<stdio.h>

void swapv(int x, int y);

int main()
{
    int a = 10, b = 20;

    swapv(a, b); // actual arguments 10 and 20 in the calling function have been passed to the called function. The
                    // called function will receive these two integers, 10 and 20, as formal arguments.
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

void swapv(int x, int y) // changes made in the formal arguments, 10 and 20, will remain limited to the calling function.
{                       // This happens so because the formal arguments are received in variables x and y which are local
    int t;              // to the called function. These changes will not affect the actual arguments, 10 and 20, in the
                        // calling function.
    t = x;
    x = y;
    y = t;

    printf("x = %d, y = %d\n", x, y);
}
*/
/*
// Call by reference:

#include<stdio.h>

void swapr(int *, int *); // Prototype declaration of function swapr. It has no data type for return. It will take two
                            // integer pointers as inputs/arguments. These integer pointers, or pointer variables, will
int main()                  // store addresses of two other variables and values at those addresses will be integers.
{
    int a = 10, b = 20; // a and b are two ordinary integer variables.

    printf("Before swap a = %d, b = %d\n", a, b); // a = 10 and b = 20 before the call by reference.

    swapr(&a, &b); // Call by reference has been made in which the addresses of a and b as actual arguments in the calling
                    // function have been passed to the called function rather than values of a and b.
    printf("After swap a = %d, b = %d\n", a, b); // a = 20 and b = 10 after the call by reference. So, call by reference
                                                // has changed/swapped values in the actual arguments.
    return 0;
}

void swapr(int *x, int *y) // definition: in which the function has no return data type, and name of the function is swapr.
                            // The function takes two pointer variables, x and y, which will store addresses of two other
{                           // variables, a and b, and values at those addresses will be integers.
    int t;

    t = *x; //Take the value at address contained in pointer x and put it in the variable t. So, t = 10.
    *x = *y; //Take the value at address contained in pointer y and put it in the address contained in pointer x.So a = 20.
    *y = t; // Take the value in variable t and put it in the address contained in the pointer y. So, b = 10.
            // After all the instructions in this function have been executed, the values in the actual arguments in the
            // calling function have been changed. That is, a = 20 and b = 10.
}
*/
/*
// Using Call by Reference to return more than one values at same time to the calling function:

#include<stdio.h>

void areaperi(int, float *, float*); // this function will take one variable which will store an integer value and two
                                    // pointer variables which will store addresses and values at those addresses will be
int main()                          // float.
{
    int radius;                     // this will reserve a space in memory and label it radius for storing integer value.
    float area, perimeter;          // this will reserve two spaces in memory and label one area and the other perimeter
                                    // and those spaces will store float values.
    printf("Enter radius of a circle : ");
    scanf("%d", &radius);           // this will store the radius value entered by the user in memory location/space
                                    // labeled earlier as radius.
    areaperi(radius, &area, &perimeter); // this will pass on the value of radius and the addresses of area and perimeter
                                        // memory locations to the calling function.
    printf("Area = %f\n", area);
    printf("Perimeter = %f\n", perimeter);

    return 0;
}

void areaperi(int r, float *a, float *p) // the value of radius received from the calling function and stored in the
{                          //integer variable, r, and the addresses of area and perimeter received and stored in float
                            // pointers, a and p, respectively.
    *a = 3.14 * r * r;  // It will evaluate the R.H.S and the answer will be put in the address contained in pointer, a.
                        // That is the address of the variable, area, in the calling function. Thus, the answer from the
                        // R.H.S will be put in the the variable, area. One value returned to the calling function.
    *p = 2 * 3.14 * r;  // It will evaluate the R.H.S and the answer will put in the address contained in the pointer, p.
                        // That is the address of the variable, perimeter, in the calling function. Thus, the answer from
                        // the R.H.S will be put in the variable, perimeter. Second value returned to the calling function.
}
*/

// Exercises:
/*
// Compute Sum, Average, and Standard Deviation of 5 integers:

#include<stdio.h>
//#include<math.h>

void dstat(int, int, int, int, int, int *, float *, float *); // Could have used only 3 pointers to make changes in sum,
                                            // average and standard deviation in the calling function. The rest of the
int main()                                  // info/integers could have been defined and received in body of this function.
{
    int a, b, c, d, e, sum; // except sum all the other integer variables could have been defined only dstat function.
    float avg, sd;


    printf("Enter five integers : ");   // this could have been asked in the dstat function.
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e); // this could have been done in the dstat function.

    dstat(a, b, c, d, e, &sum, &avg, &sd); // only addresses of the memory locations labeled as sum, avg, and sd could
                                            // have been passed on as the arguments to the function dstat.
    printf("Sum = %d\n Average = %f\n Standard Deviation = %f\n", sum, avg, sd);

    return 0;
}

void dstat(int k, int l, int m, int n, int o, int *sum, float *avg, float *sd)
{
    *sum = k + l + m + n + o; // The R.H.S will be evaluated and the answer will be stored in the address contained in
                                // the pointer, sum. Remember sum in main is integer variable, whereas sum in dstat is
    *avg = *sum/5;      // pointer variable. Sum in main will store actual integer, whereas sum in dstat will hold the
                        // address of the integer variable, sum. All this is true for the average and standard deviation.
    *sd = sqrt((pow((k-*avg), 2) + pow((l-*avg), 2) + pow((m-*avg), 2) + pow((n-*avg), 2) + pow((o-*avg), 2))/4);
}
*/
/*
// Average and Percentage of Marks:
#include<stdio.h>

void avgper(float *, float *);

int main()

{
    float avg, percentage;

    avgper(&avg, &percentage);

    printf("Average Marks = %f\n Percentage Marks = %f\n", avg, percentage);

    return 0;
}

void avgper(float *x, float *y)
{
    int n1, n2, n3;
    float tm = 300;



    printf("Enter the marks in the three subjects : ");
    scanf("%d %d %d", &n1, &n2, &n3);

    *x = (n1 + n2 + n3)/3;

    *y = (n1 + n2 + n3)/tm * 100;

}
*/
/*
// Circularly shift the values to the right. My own solution:
#include<stdio.h>

void cshift(int, int, int);

int main()
{
    int a, b, c;

    printf("Enter three numbers : \n");
    scanf("%d%d%d", &a, &b, &c);
    //printf("%d %d %d", a, b, c);

    cshift(a, b, c);

    return 0;

}

void cshift(int a, int b, int c)
{
    int k;

    printf("Before shift: a = %d b = %d c = %d\n", a, b, c);

    k = c;
    c = b;
    b = a;
    a = k;

    printf("After shift: a = %d, b = %d, c = %d", a, b, c);
}
*/
/*
// Circularly shift the values to the right. The solution manual solution:

#include<stdio.h>

void cshift(int, int, int);

int main()
{
    int x, y, z;

    printf("Enter the three numbers : ");
    scanf("%d %d %d", &x, &y, &z);

    cshift(x, y, z);

    return 0;
}

void cshift(int x, int y, int z)
{
    int i, t;

    printf("Before shift: x = %d, y = %d, z = %d \n", x, y, z);

    for (i = 0; i <= 2; i++) // for loop is not needed if we want only one right shift. For this, my solution is fine.
    {
        t = z;
        z = y;
        y = x;
        x = t;

        printf("After right shifting of values %d times : \n", i + 1);
        printf("x = %d, y = %d, z = %d \n", x, y, z);

    }
}
*/




































































































































































