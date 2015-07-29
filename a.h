#ifndef A_H
#define A_H

#include <string>
#include "aexport.h"

#ifdef a_BUILT_AS_STATIC
#  define a_EXPORT_TEMPLATE
#else
#  ifndef a_EXPORT_TEMPLATE
#    ifdef a_EXPORTS
        /* We are building this library */
#      define a_EXPORT_TEMPLATE
#    else
        /* We are using this library */
#      define a_EXPORT_TEMPLATE extern
#    endif
#  endif

#  ifndef A_NO_EXPORT
#    define A_NO_EXPORT 
#  endif
#endif

#ifdef _MSC_VER
// Explicit template exports.
#include <string>
a_EXPORT_TEMPLATE template class a_EXPORT std::allocator<char>;
a_EXPORT_TEMPLATE template struct a_EXPORT std::char_traits<char>;
a_EXPORT_TEMPLATE template class a_EXPORT std::basic_string<char, std::char_traits<char>, std::allocator<char> >;
#endif

class a_EXPORT a
{
  std::string val;

 public:
  a();

  std::string const&
  getval() const;
};

#endif // A_H
