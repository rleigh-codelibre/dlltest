#include "a.h"
#include "b.h"
#include "c.h"
#include "c2.h"
#include "d.h"
#include "d2.h"
#include <iostream>

int main()
{
  a ao;
  b bo;
  std::cout << ao.getval() << bo.getval() << std::endl;
  c co;
  for(const auto& v : co.getval())
    std::cout << v << std::endl;
  c2 co2;
  for(const auto& v : co2.getval())
    std::cout << v << std::endl;
  d do_;
  for(const auto& v : do_.getval())
    std::cout << v << std::endl;
  d2 do2;
  for(const auto& v : do2.getval())
    std::cout << v << std::endl;
}
