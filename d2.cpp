#include "d2.h"

namespace
{
  std::vector<std::string>
  values()
  {
    std::vector<std::string> ret;
    ret.push_back("d4");
    ret.push_back("d5");
    ret.push_back("d6");
    return ret;
  }
}

d2::d2():
  val(values())
{
}

std::vector<std::string> const&
d2::getval() const
{
  return val;
}
