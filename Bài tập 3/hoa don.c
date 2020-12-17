int main(void) {
int dongia, soluong, thanhtien;
  printf("nhap don gia va so luong\n");
scanf("%d%d", &dongia, &soluong); 
thanhtien = dongia * soluong;
if (soluong >= 5 && dongia >= 500){
  printf("so tien can phai thanh toan la %d", thanhtien * 50/100);
}else{
  printf("so tien can phai thanh toan la %d", thanhtien);
}
  return 0;
}
