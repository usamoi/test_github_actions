#include <stddef.h>
#include <stdint.h>

__attribute__((__overloadable__)) void f(int32_t x) {}
__attribute__((__overloadable__)) void f(int64_t x) {}
__attribute__((__overloadable__)) void f(uint32_t x) {}
__attribute__((__overloadable__)) void f(uint64_t x) {}

int main() {
  size_t x = 0;
  f(x);
  return 0;
}
