#include "d.h"

namespace
{
  std::vector<std::string>
  values()
  {
    std::vector<std::string> ret;
    ret.push_back("d1");
    ret.push_back("d2");
    ret.push_back("d3");
    return ret;
  }
}

d::d():
  val(values())
{
}

std::vector<std::string> const&
d::getval() const
{
  return val;
}
