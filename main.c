#include <stdio.h>

int main (void) { /* array-pt.c */
    /**< Variable deklaration af a og i */
  int a[3], i;

  /**< Sætter første værdi i arrayen til 5 */
  *a = 5;
  /**< Anden array plads sat til 4 */
  *(a + 1) = 4;
  /**< Arrayplads 0 + 1 plusen og sættes i sidste arrayplads */
  *(a + 2) = *a + *(a + 1);

  for (i = 0; i < 3; i++) {
    printf( "%d: %d\n", i, a[i]);
  }

  return 0;
}
