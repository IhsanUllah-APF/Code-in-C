/*
// Store information of different characteristics of books using Arrays:
#include<stdio.h>

int main()
{
    char name[3];
    float price[3];
    int pages[3], i;

    printf("Enter names, prices and number of pages of 3 books \n");

  //scanf("%c %f %d %c %f %d %c %f %d", &name[0], &price[0], &pages[0], &name[1], &price[1], &pages[1], &name[2], &price[2],
  //        &pages[2]);

 //printf("%c %f %d %c %f %d %c %f %d  \n", name[0], price[0], pages[0], name[1], price[1], pages[1], name[2], price[2],
  //         pages[2]); // will output the values contained in 3 arrays in the sequence given in the print command above.

 // Alternatively,

    for(i = 0; i < 2; i++)
    {
        scanf(" %c %f %d", &name[i], &price[i], &pages[i]);
    }

    for(i = 0; i < 2; i++)
    {
        printf("%c %f %d\n", name[i], price[i], pages[i]);
    }

    return 0;
}
*/
/*
// Alternative way to store different information about different characteristics of books using Structure:
#include<stdio.h>
int main()
{
    struct book // Define a new data type and call it book using keyword struct. The new data type book and its variables
    {           // b1, b2, and b3 are all locally defined in function main. Their member variables are also local.
        char name; // These are the member variables and they will be contained in b1, b2, and b3 declared below.
        float price;
        int pages;

    }; // the } has to be followed by the ; . The definition of new data type does not take place in memory. Declaration
        // of b1, b2, and b3 can also be made after } and before ; without using the words, struck book.
    struct book b1, b2, b3; // These are the variables of type book. Struct is key word used with the data type book
                            // since data type book has been created with the struct. This reserves a place in memory.
    printf("Enter names, prices and pages of 3 books \n");

    scanf("%c %f %d", &b1.name, &b1.price, &b1.pages);//Go inside b1 and put the corresponding values in member variables.
    scanf(" %c %f %d", &b2.name, &b2.price, &b2.pages); // have to give space between " and %c for some unknown reason.
    scanf(" %c %f %d", &b3.name, &b3.price, &b3.pages);
    printf("%c %f %d\n", b1.name, b1.price, b1.pages);
    printf("%c %f %d\n", b2.name, b2.price, b2.pages);// Go inside b2 and print the values in member variables.
    printf("%c %f %d\n", b3.name, b3.price, b3.pages);

    // or, alternatively;

    //scanf("%c %f %d %c %f %d %c %f %d", &b1.name, &b1.price, &b1.pages, &b2.name, &b2.price, &b2.pages, &b3.name,
      //    &b3.price, &b3.pages); // this scanf and the following printf commands work too.
    //printf("%c %f %d %c %f %d %c %f %d", b1.name, b1.price, b1.pages, b2.name, b2.price, b2.pages, b3.name,
      //     b3.price, b3.pages);

    return 0;
}
*/
/*
// Initialize structure variables (b1, b2, b3):
struct book
{
    char name[10];
    float price;
    int pages;

};

struct book b1 = {"Basic", 130.00, 550}; // declaration and intitialization of structure variable, b1.
struct book b2 = {"Physics", 150.80, 800}; // } must be followed by ;
struct book b3 = {0}; // all the member variables of b3 have been set equal to zero.
*/

// Storing of structure elements:

#include<stdio.h>
int main()

{

    struct book
    {
        char name;
        float price;
        int pages;
    };
    struct book b1 = {'B',130.00,550};

    printf("Address of name = %u\n", &b1.name); // There must be structure variable (b1) before dot operator and structure
    printf("Address of price = %u\n", &b1.price); // element or member variable after the dot operator.
    printf("Address of pages = %u\n", &b1.pages);

    return 0; // the memory locations are not the same as in the book. 4 bytes have been reserved for the char variable
}               // name as well like price and pages. So, all 3 variables may not have been stored in contagious locations.














































































