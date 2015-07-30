#include "c2.h"

namespace
{
  std::vector<std::string>
  values()
  {
    std::vector<std::string> ret;
    ret.push_back("c4");
    ret.push_back("c5");
    ret.push_back("c6");
    return ret;
  }
}

c2::c2():
  val(values())
{
}

std::vector<std::string> const&
c2::getval() const
{
  return val;
}
