#include <stdio.h>
 
int main(){
    printf("\n-------CHUONG TRINH IN BANG CUU CHUONG-------\n");
        // in ra m�n hinh d�ng b?ng c?u chuong  
    for (int i = 2; i <= 10; i++){
    	// in ra v�ng lap tu 2 den 9  
        printf("\n--------BANG CUU CHUONG %d--------\n", i);
        for(int j = 2; j < 10; j++){
            printf("\t%d x %d = %d\n", i, j, i*j);
        }
    }
}
