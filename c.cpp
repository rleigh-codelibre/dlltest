#include "c.h"

c::c():
  val({"c1", "c2", "c3"})
{
}

std::vector<std::string> const&
c::getval() const
{
  return val;
}
