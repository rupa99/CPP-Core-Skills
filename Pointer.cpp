#include <stdio.h>

// you are sending pointers.
void update(int *c, int *d) {
  // because the pointer values changes things, we want
  // to keep track of the original value.
  int originalc = *c;
  int originald = *d;

  *c = *c + *d;

  if (originalc < originald)
    *d = (originalc - *d) * -1;
  else
    *d = originalc - *d;
}

int main() {
  int a, b;
  int *pa = &a, *pb = &b;

  scanf("%d %d", &a, &b);
  update(pa, pb);
  printf("%d\n%d", a, b);

  return 0;
}
