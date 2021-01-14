#include <stdio.h>

int main () {
  int mang[4];
  //mang nay bat dau bang so 4   
  printf("nhap 4 so tu ban phim: ");
  //hien thi nhap 4 so ra man hinh  
  for (int i = 0; i < 4; i++) 
  	{
  // vòng lap bat dau tu 0 và bé hon 4 theo mang [4]  
    scanf("%d", &mang[i]);
    //nhap so cua mang a tu ban phim  
  }
  for (int i = 0; i < 4; i++) {
  // Lap lai vong lap cua i  
    printf("%d ", mang[i]);
    //xuat ra cac gia tri co trong mang [4] ra man hinh  
  }
  return  0;
}

