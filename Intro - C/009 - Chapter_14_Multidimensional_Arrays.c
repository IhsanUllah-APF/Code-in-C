/*
// Access elements of 2-D array using a pointer:

#include<stdio.h>

int main()
{
    int s[4][2] = {{1234, 56}, {1212, 33}, {1434, 80}, {1312, 78}};

    // Access the 1 Dimensional arrays.
    printf("The pointer s = %u\n\n", s);

    printf("(s + 0) = %u\n", (s + 0));
    printf("(s + 1) = %u\n", (s + 1));
    printf("(s + 2) = %d\n", (s + 2));
    printf("(s + 3) = %d\n\n", (s + 3));

    printf("s[0] = %u\n", s[0]);
    printf("s[1] = %u\n", s[1]);
    printf("s[2] = %u\n", s[2]);
    printf("s[3] = %u\n\n", s[3]);

    // Go inside the zeroth 1 Dimensional array to access the address of 1st element in zeroth 1 D array, s[0][0]:
    printf("*s = %u\n", *s);
    printf("*(s + 0) = %u\n", *(s + 0));
    printf("s[0] = %u\n", s[0]);
    printf("&s[0][0] = %u\n\n", &s[0][0]);

    // Access the 1st element in zeroth 1 D array:
    printf("*(*s) = %u\n", *(*s));
    printf("*(*(s + 0)) = %u\n", *(*(s + 0)));
    printf("*s[0] = %u\n", *s[0]);
    printf("*&s[0][0] = %u\n\n", *&s[0][0]);

    // Access the address of second element in zeroth 1 Dimensional array, s[0][1]:
    printf("(*s + 1) = %u\n", (*s + 1));
    printf("(s[0] + 1) = %u\n", (s[0] + 1));
    printf("&s[0][1] = %u\n\n", &s[0][1]);

    // Access the 2nd element in zeroth 1 Dimensional array:
    printf("*(*s + 1) = %u\n", *(*s + 1));
    printf("*(s[0] + 1) = %u\n", *(s[0] + 1));
    printf("*(&s[0][1]) = %u\n\n", *(&s[0][1]));

    // Go inside the first 1 Dimensional array and access address of its 1st element, s[1][0]:
    printf("*(s + 1) = %d\n", *(s + 1));
    printf("s[1] = %d\n", s[1]);
    printf("&s[1][0] = %u\n\n", &s[1][0]);

    // Access the first element in first 1 Dimensional array:
    printf("*(*(s + 1)) = %u\n", *(*(s + 1)));
    printf("*s[1] = %u\n", *s[1]);
    printf("*&s[1][0] = %u\n", *&s[1][0]);
    printf("s[1][0] = %u\n\n", s[1][0]);

    // Access the address of the second element in first 1 Dimensional array, s[1][1]:

    printf("*(s + 1) + 1 = %u \n", *(s + 1) + 1);
    printf("s[1] + 1 = %u\n", s[1] + 1);
    printf("&s[1][1] = %u\n\n", &s[1][1]);

    // Access the second element in first 1 Dimensional array:

    printf("*(*(s + 1) + 1) = %u\n", *(*(s + 1) + 1));
    printf("*(s[1] + 1) = %u\n", *(s[1] + 1));
    printf("*&s[1][1] = %u\n", *&s[1][1]);
    printf("s[1][1] = %u\n\n", s[1][1]);

    // Go inside second 1 Dimensional array and access address of its 1st element, s[2][0]:

    printf("(s + 2) = %u\n", (s + 2));
    printf("s[2] = %u\n\n", s[2]);

    // Access the address of 1st element in second 1 Dimensional array:

    printf("*(s + 2) = %u\n", *(s + 2));
    printf("s[2] = %u\n", s[2]);
    printf("&s[2][0] = %u\n\n", &s[2][0]);

    // Access the 1st element in second 1 Dimensional array:

    printf("*(*(s + 2)) = %u\n", *(*(s + 2)));
    printf("*s[2] = %u\n", *s[2]);
    printf("*(&s[2][0]) = %u\n", *(&s[2][0]));
    printf("s[2][0] = %u\n\n", s[2][0]);

    // Access the address of 2nd element in second 1 Dimensional array:
    printf("*(s + 2) + 1 = %u\n", *(s + 2) + 1);
    printf("s[2] + 1 = %u\n", s[2] + 1);
    printf("&s[2][1] = %u\n\n", &s[2][1]);

    // Access the 2nd element in second 1 Dimensional array:
    printf("*(*(s + 2) + 1) = %u\n", *(*(s + 2) + 1));
    printf("*(s[2] + 1) = %u\n", *(s[2] + 1));
    printf("*(&s[2][1]) = %u\n", *(&s[2][1]));
    printf("s[2][1] = %u\n", s[2][1]);

    // Note the third 1 Dimensional array has been done in Ipad. Can practice it latter.

    return 0;
}
*/

// Pointer to an Array:

#include<stdio.h>

int main()
{
    int s[4][2] = {


                    {1234, 56},
                    {1212, 33},
                    {1434, 80},
                    {1312, 78}

                };

    int (*p)[2];
    int i, j, *pint;
    for(i = 0; i <= 3; i++)
    {
        p = &s[i];
        pint = (int *)p;
        printf("\n");
        for(j = 0; j <= 1; j++)
            printf("%d ", *pint);
    }

    return 0;
}



















