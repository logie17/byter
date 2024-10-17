#include "Byter.h"

int Byter::setBit(int num, int position) {
  return num | (1 << position);
}
