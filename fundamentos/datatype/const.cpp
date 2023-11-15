#include <iostream>

int main() {
  // {{{  ...
  const int threads = 4;
  threads = 10; //  WARNING: Return a error, bcause it's a constant

  return 0;
  // end }}}
}
