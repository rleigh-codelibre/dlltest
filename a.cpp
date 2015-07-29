#include "a.h"

a::a():
  val("a")
{
}

std::string const&
a::getval() const
{
  return val;
}
