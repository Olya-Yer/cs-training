#include <stdio.h>
int main(int argc, char const *argv[]) {
  int n;
  do
  {
    scanf("%d",&n);
  }
  while (n<=0||n>23);

  for (size_t i = 1; i < n+1; i++) {
    for (size_t j = 1; j < n+1-i; j++) {
      printf("*");
    }
    for (size_t k = 1; k <= i+1; k++) {
      printf("#");
    }
    printf("\n");
  }
  return 0;
}
