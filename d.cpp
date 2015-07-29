#include "d.h"

d::d():
  val({"d1", "d2", "d3"})
{
}

std::vector<std::string> const&
d::getval() const
{
  return val;
}
