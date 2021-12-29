//#include <stdio.h>

// To compute amount of interest.
//int main() {

//    int p, n;
//    float r, si;

//    p=1000;
//    n=5;
//    r=8.5;

//    printf("Please enter the principal amount ");
//   scanf("%d", &p);

//    printf("Please enter the number of years ");
//    scanf("%d", &n);

//    printf("Please enter the interest rate ");
//    scanf("%f", &r);

//     printf("Enter values of p, n, r ");
//     scanf("%d%d%f", &p, &n, &r);

//     si = p*n*r/100;

//     printf("The amount of interest = %f", si);

//    return 0;
//}

/*#include<stdio.h>

// To compute gross salary
int main(){

    int bs, gs;

    printf("Please enter your basic salary : ");

    scanf("%d", &bs);

    gs = bs + (bs*40/100) + (bs*20/100);

    printf("Your gross salary is %d", gs);

    return 0;

}*/


//#include<stdio.h>

// to convert distance from km into meters

/*int main() {

int distance;
float m, f, i, c;

printf("Please enter the distance in KM : ");

scanf("%d", &distance);

m = distance*1000;

f = distance*3280.84;

i = distance*39370.1;

c = distance*100000;

printf("Your distance in meter is %f\n", m);

printf("Your distance in feet is %f\n", f);

printf("Your distance in inch is %f\n", i);

printf("Your distance in centimeter is %f\n", c);

return 0;
}*/

// to calculate aggregate marks and average

/*#include<stdio.h>

int main(){

    float m1, m2, m3, m4, m5, agg_marks, avg_marks;

    printf("Please enter your marks in 5 subjects : ");

    scanf("%f%f%f%f%f", &m1, &m2, &m3, &m4, &m5);

    agg_marks = (m1+m2+m3+m4+m5);

    avg_marks = (m1+m2+m3+m4+m5)/5;

    //printf("Your aggregate marks and average marks are %f and %f, respectively.", agg_marks, avg_marks);

    printf("Your aggregate marks are %f\n and average marks are %f, respectively.", agg_marks, avg_marks);

    return 0;
}*/

/* #include<stdio.h>

int main(){

float temp_cent, temp_fehr;

printf("Enter the temperature in Fahrenheit : ");

scanf("%f", &temp_fehr);

temp_cent = (temp_fehr - 32) * 5/9;

printf("The temp in Centigrade is %f", temp_cent);

return 0;

}*/

/*
#include<stdio.h>

int main(){

int a, b, c, d, e;

printf("Please enter the 5 digits : ");

scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

printf("%d", a+b+c+d+e);

return 0;
}
*/

/*#include <stdio.h>

int main () {

int a, b, c, d, e;

printf("Enter the 5 digits : ");

scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

printf("The reverse of the digits is : %d%d%d%d%d", e,d,c,b,a);

return 0;

return 0;
}
*/

/*
#include<stdio.h>
#include<math.h>

int main() {

int a, b, c;

float s, area;

printf("Enter the length of the three sides of the triangle : ");

scanf("%d%d%d", &a, &b, &c);

s = (a+b+c)/2;

area = sqrt(s*(s-a)*(s-b)*(s-c));

printf("The area of the triange is = %f", area);

return 0;
*/
/*
#include<stdio.h>

int main() {

int c, d;

printf("Enter the values of c and d : ");

scanf("%d%d", &c, &d);

printf("The value of c is = %d\n The value of d is = %d", d, c);

printf("\n%d", c);

return 0;

}
*/
/*
#include<stdio.h>

int main() {

int c, d;

printf("Enter the two numbers : ");

scanf("%d%d", &c, &d);

printf("\n\n The numbers before the interchange are c = %d, d = %d", c, d);

c = c + d;

d = c - d;

c = c - d;

printf("\n\nThe numbers after the interchange are c = %d, d = %d \n", c, d);

return 0;

}
*/

#include<stdio.h>

int main(){

int n1, n2, n5, n10, n50, n100, num;

printf("Enter a number : ");

scanf("%d", &num);

n100 = num/100;
num = num%100;

n50 = num/50;
num = num%50;

n10 = num/10;
num = num%10;

n5 = num/5;
num = num%5;

n2 = num/2;
num = num%2;

n1 = num/1;
num = num%1;

printf("Number of 100 notes = %d\n", n100);
printf("Number of 50 notes = %d\n", n50);
printf("Number of 10 notes = %d\n", n10);
printf("Number of 5 notes = %d\n", n5);
printf("Number of 2 notes = %d\n", n2);
printf("Number of 1 notes = %d\n", n1);

getch();
return 0;
}















































