#include <stdio.h>
  
void main(){
    int a;
  
    printf("Nhap mot so: \n");
    scanf("%d", &a);
    if ( a == 0){
        printf("%d ban 0 \n", a);
    }else if ( a % 2==0){
        printf("%d la so chan  \n", a);
    }else{
        printf ("a la so le ");
}
return 0; 
}

