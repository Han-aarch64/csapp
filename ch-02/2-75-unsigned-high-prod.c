#include <inttypes.h>

int signed_high_prod(int x, int y) {
  int64_t mul = (int64_t) x * y;
  return mul >> 32;
}

unsigned unsigned_high_prod(unsigned x, unsigned y) {
    return signed_high_prod(x, y) + x * (y >> 31) + y * (x >> 31);
}