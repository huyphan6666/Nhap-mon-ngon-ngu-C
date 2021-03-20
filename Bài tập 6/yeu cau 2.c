int main() {
  unsigned int n; //unsigned là g?i s? không âm
  float S = 0;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    S += 1/(float)i;
  }
  printf("Tong S la: %f", S);
  return 0;
}
