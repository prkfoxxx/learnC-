#include <stdio.h>

void main()
{
    int a, b, temp ;

    printf ("Enter the value of a: ") ;
    scanf  ("%d",&a);
    printf ("\n Enter the value of b: ") ;
    scanf ("%d", &b);
// Traverse of values
    temp = a;
    a = b;
    b = temp;

    printf("After the transverse of values of a and b \n");

    printf ("Value of a: %d \n", a);
    printf ("Value of b: %d", b);

}
