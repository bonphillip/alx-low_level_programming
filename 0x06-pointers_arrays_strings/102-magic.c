#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;

  // *(p + 5) = 98; // This will not work because you are not allowed to modify p

  // Instead, we can use p to indirectly access the element at index 5 of the array a.
  *(a + 5) = 98;

  printf("a[2] = %d\n", a[2]);
  return (0);
}
