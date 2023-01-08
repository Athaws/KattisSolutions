#include <stdio.h>
#include <math.h>

int main() {
  int r;
  double euclidian_area, taxicab_area;

  scanf("%d", &r);

  euclidian_area = M_PI * pow(r, 2);

  taxicab_area = pow(r,2) * 2;

  printf("%.6f\n", euclidian_area);
  printf("%.6f\n", taxicab_area);

  return 0;
}