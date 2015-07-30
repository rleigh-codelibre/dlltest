#include "c.h"

namespace
{
  std::vector<std::string>
  values()
  {
    std::vector<std::string> ret;
    ret.push_back("c1");
    ret.push_back("c2");
    ret.push_back("c3");
    return ret;
  }
}

c::c():
  val(values())
{
}

std::vector<std::string> const&
c::getval() const
{
  return val;
}
