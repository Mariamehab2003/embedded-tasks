
#include "delete.h"
int deleteElement(int arr[], int pos) {
  if (pos < 0 || pos >= n) {

    return 0;
  }

  for (int i = pos; i < n - 1; i++) {
    arr[i] = arr[i + 1];
  }

  n--;
  return 1;
}
