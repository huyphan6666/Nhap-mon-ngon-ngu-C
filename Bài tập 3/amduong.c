#include <stdio.h>
  
void main()
{
    int a;
  
    printf("Nhap mot so: \n");
    scanf("%d", &a);
    if ( a > 0)
        printf("%d la so duong \n", a);
    else if ( a < 0)
        printf("%d la so am \n", a);
    else if ( a>=0) 
        printf ("a la so khong duong va khong am");

