#include <iostream>
#include <functional>

int main()
{
  [out = std::ref(std::cout << "Hello, ")](){ out.get() << "world!!!"; }();
  return 0;
}
