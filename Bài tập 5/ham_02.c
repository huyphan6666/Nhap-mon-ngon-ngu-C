//Khoi khai bao
#include<stdio.h>
void kiem_tra_am_duong(int x);
 //khoi ham main
int main(){
  int n;
  printf("Nhap n = ");
  scanf("%d", &n);
  if(kiem_tra_am_duong(n) > 0)
      printf("n la so nguyen duong");
  else if (kiem_tra_am_duong(n) < 0)
    printf("n la so nguyen �m");
  else 
    printf("n = 0");
  return 0;
}
