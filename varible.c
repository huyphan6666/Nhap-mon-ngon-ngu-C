#include <stdio.h>

int main(void) {
	// khai bao gia tri bien num kieu int
	int num;
	// khoi tao gia tri bien num
	num = 5;
	// hien thi bien num ra man hinh
	printf("Bien num co gia tri: %d\n",num);
	char c;
	// khoi tao gia tri cho bien c
	c = 'a';
	// hien thi bien c ra man hinh
	printf("Bien num co gia tri: %d", c);
	// Hien thi dong: Bien num = 5 va bien c = a
	printf("Bien num = %d va bien c= %c\n", num , c);
	getchar();
	return 0;
}
