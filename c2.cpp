#include "c2.h"

c2::c2():
  val({"c4", "c5", "c6"})
{
}

std::vector<std::string> const&
c2::getval() const
{
  return val;
}
