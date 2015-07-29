#include "d2.h"

d2::d2():
  val({"d4", "d5", "d6"})
{
}

std::vector<std::string> const&
d2::getval() const
{
  return val;
}
