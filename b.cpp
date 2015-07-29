#include "b.h"

b::b():
  val("b")
{
}

std::string const&
b::getval() const
{
  return val;
}
