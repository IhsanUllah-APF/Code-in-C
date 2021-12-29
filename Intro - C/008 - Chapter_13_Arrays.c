/*
// Example 1: Find average marks of a class of 5 students.
#include<stdio.h>
int main()
{
    int marks[5];
    int i, sum = 0, avg;

    for(i = 0; i <= 4; i++)
    {
        printf("Enter your Marks : \n");
        scanf("%d", &marks[i]); // This will store the data in the array.
    }

    for(i = 0; i <= 4; i++)
    {
        sum = sum + marks[i]; // This will read the data from the array and add it.

    }
    printf("Sum = %d\n", sum);
    avg = sum / 5;
    printf("Average Marks = %d \n", avg);

    return 0;
}
*/
/*
// Passing array elements to a function: Call by value
#include<stdio.h>

void display(int);

int main()
{
    int i;

    int marks[] = {55, 65, 75, 56, 78, 78, 90}; // declaration and initialization of the array.

    for(i = 0; i <= 6; i++)
    {
        display(marks[i]); // function call for all the elements of the array one by one. Control will go to the function
    }                       // display after the call.

    return 0;
}

void display(int m)
{
    printf("%d ", m); // the element of the array (marks[i]) passed as actual argument by the calling function will be
}                       // stored in the called function display in the variable, m, and then printed out. After this,
                        // the control will go back to the for loop in the function main. The control will keep moving
                    // back and forth between the for loop and the function display until the condition in the for loop
                    // becomes false, at which point the control will go to return and then the closing } in the function
                    // main.
*/
/*
// passing array elements to a function: Call by Reference.
#include<stdio.h>

void display(int *);

int main()
{
    int i;

    int marks[] = {55, 65, 75, 56, 78, 78, 90};

    for(i = 0; i <= 6; i++)
    {
        display(&marks[i]); // this will pass on address of each element of the array one by one to the function display.
    }

    return 0;
}

void display(int *m) // the address will store in the pointer, m.
{
    printf("%d ", *m); // this will print the value at address, that is, the value stored in address contained in pointer,m.
}                       // The control will move back and forth between for loop in function main and function display
                        // until the condition in the for loop becomes false.
*/

/*
// producing the same output but using pointer of an integer pointer:

#include<stdio.h>

void display(int *); // function display takes address of a variable, as input, which will store integer.
void show(int **); // function show takes address of pointer, as input, which contains address and value at that address
                    // is integer.
int main()
{
    int i;
    int marks[] = {55, 65, 75, 56, 78, 78, 90};

    for(i = 0; i <= 6; i++)
    {
        display(&marks[i]); // calling function by passing it address of an array element, i.
    }

    return 0;
}

void display(int *m) // function display takes address, as input and stores it in pointer m, of an
                    // array element and the value at that address in array is integer.
{
    show(&m); // the address of the pointer, m, is passed to the function show.
}

void show(int **k) // function show takes address of pointer m, as input and stores it in pointer k, and  at that address
{                   // of pointer m, address of an array element is stored and value at that address is integer.
    printf("%d ", **k); // this will produce value stored in address contained in pointer m, whose address is stored in
}                       // pointer k.
                    // the control will go back to the function display and then to the for loop in function main, where
                    // condition is tested. If found true, then display will be called from main, and show will be called
                    // from display and after printing the value, show will return control to display and display will
                    // return it to main to check the condition in for loop. This process will continue until the
                    // condition in for loop becomes false, upon which the program will end.
*/
/*
// Pointers and arrays:

#include<stdio.h>

int main()
{
    int i = 3, *x;
    float j = 1.5, *y;
    char k = 'c', *z;

    printf("value of i = %d\n", i);
    printf("value of j = %f\n", j);
    printf("value of k = %c\n", k);

    x = &i;
    y = &j;
    z = &k;


    printf("Original address in x = %u\n", x);
    printf("Original address in y = %u\n", y);
    printf("Original address in z = %u\n", z);

    x++;
    y++;
    z++;

    printf("New address in x = %u\n", x);
    printf("New address in y = %u\n", y);
    printf("New address in z = %u\n", z);


    return 0;
}
*/
/*
// Addition and subtraction of a number from a pointer and subtraction of one pointer from another pointer:
#include<stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 45, 67, 56, 74};
    int *i, *j;

    i = &arr[1];
    i = i + 2;
    j = i + 3;
    //j = &arr[5];


    // printf("%d %d\n", j - i, *j - *i);

    return 0;
}
*/
/*
// Comparison of two pointers:
#include<stdio.h>

int main()
{
    int arr[] = {10, 20, 36, 72, 45, 36};
    int *j, *k;

    j = &arr[4]; // j contains address of the fourth indexed element of the array.
    k = (arr + 4); // arr is the name of the array and contains address of the zeroth indexed element of the array. When
                    // 4 is added to this address, then k also contains address of the fourth indexed element of array.
    printf("Address contained in j = %u\n", j);
    printf("Address contained in k = %u\n", k);

    if(j == k) // this condition is true.
        printf("The two pointers point to the same location.\n"); // so this is printed.

    else
        printf("The two pointers do not point to the same location.\n");

    return 0;
}
*/
/*
// print out memory locations of array elements:

#include<stdio.h>

int main()
{
    int i;
    int num[] = {24, 34, 12, 44, 56, 17};

    for(i = 0; i <= 5; i++)
    {
       printf("address = %u ", &num[i]); // the address is 4 bytes apart from the next address.
       printf("index = %d ", i); // will output the index position
       printf("element = %d\n", num[i]); // will output the element or value in array at that position
    }

    return 0;
}
*/
/*
// Accessing the addresses and elements of array: Method 1 using the subscripted variable

#include<stdio.h>

int main()
{
    int i;
    int num[] = {24, 34, 12, 44, 56, 17};

    for(i = 0; i <= 5; i++)
    {
        printf("address = %u ", &num[i]); // i is the subscript of variable/array num.
        printf("element = %d\n", num[i]);
    }

    return 0;
}
*/
/*
// Accessing the addresses and elements of array: Method 2 using pointer. Use this method when we want to access elements
// of array in a particular fashion or order. Otherwise, use the subscripted variable method (method 1 above). Method 2,
// using pointers, is always faster to access the elements of array and their addresses.
#include<stdio.h>

int main()
{
    int i, *j;
    int num[] = {24, 34, 12, 44, 56, 17};
    j = &num[0]; // will store the address of zeroth element in pointer j.

    for(i = 0; i <= 5; i++)
    {
        printf("address = %u ", j); // output value in j which is address of array element.
        printf("element = %d\n", *j); // output value at address contained in j.

        j++; // increment pointer j to point to the next location which is 4 bytes apart from the current location.
    }
}
*/

/*
// passing an entire array to a function: earlier we passed either an individual element of array to a function (print) or
// its address either through subscripted variable or pointer. Here, we want to pass entire array to funciton, display.

#include<stdio.h>
void display(int *, int);

int main()
{
    int num[] = {24, 34, 12, 44, 56, 17};

    display(&num[0], 6); // passing the base address is same as passing the entire array to function.

    return 0;
}

void display(int *j, int n)
{
    int i;

    for(i = 0; i <= n-1; i++)
    {
        printf("address = %u ", j);
        printf("element = %d\n", *j);

        j++; // increment pointer j to point to next location/element that is 4 bytes apart from current element/location.

    }

}
*/

/*
// Using array name as a pointer:

#include<stdio.h>

int main()
{
    int i;
    int num[] = {24, 34, 12, 44, 56, 17};

    for(i = 0; i <= 5; i++)
    {
        printf("address = %u %u ", (num + i), &num[i]); // num = &num[i]. So, num is a pointer. i is integer so it is
        printf("element = %d %d ", *(num + i), num[i]); // addition of integer to a pointer. *num gives value at address
        printf("%d %d\n", *(i + num), i[num]);          // as usual or value at address of an incremented pointer when
                                                        // integer is added to it.
    }

    return 0;
}
*/

// Output of the following programs:
/*
#include<stdio.h>

int main()
{
    int num[26], temp;

    num[0] = 100;

    num[25] = 200;

    temp = num[25];

    num[25] = num[0];

    num[0] = temp;

    printf("%d %d\n", num[0], num[25]);

    return 0;
}
*/
/*
#include<stdio.h>

int main()
{
    int array[26], i;

    for(i = 0; i <= 25; i++)
    {
        array[i] = 'A' + i; // A = 65 for keyboard or memory.

        printf("%d %c\n", array[i], array[i]);
    }

    return 0;
}
*/


/*
#include<stdio.h>

int main()
{
    int sub[50], i;

    for(i = 0; i <= 48; i++); // The ; becomes body of the loop which is null or no statement. When i = 0, which is < 48,
    {                           // the condition is true so the control goes to ; which is null and then go back to for
        sub[i] = i;             // incrementing i and it keeps going till i = 49.
        printf("%d\n", sub[i]); // this and the above statement are outside the body of the for loop now.
    }

    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int i, a = 2, b = 3;

    int arr[2 + 3];

    for(i = 0; i < a + b; i++)
    {
        scanf("%d", &arr[i]);
        printf("%d", arr[i]);
    }

    return 0;
}
*/
/*
// Search for a number in array:
#include<stdio.h>

int main()
{
    int arr[6], i, n, count = 0;

    printf("Enter 6 elements of array:\n"); // they are placed somewhere in memory.

    for(i = 0; i <= 5; i++)
        scanf("%d", &arr[i]); // takes the numbers one by one from memory and store them in address of each element one
                                // by one.
    printf("Enter a number:\n"); // the number is placed somewhere in memory.
    scanf("%d", &n); // takes the number from memory and stores it in address of n.

    for(i = 0; i <= 5; i++)
    {
        if(n == arr[i])
            count++;
    }

    printf("The number %d exists %d time(s)", n, count);

    return 0;
}
*/





















































