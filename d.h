#ifndef D_H
#define D_H

#include <vector>
#include <string>
#include "dexport.h"

#ifdef d_BUILT_AS_STATIC
#  define d_EXPORT_TEMPLATE
#else
#  ifndef d_EXPORT_TEMPLATE
#    ifdef d_EXPORTS
        /* We are building this library */
#      define d_EXPORT_TEMPLATE
#    else
        /* We are using this library */
#      define d_EXPORT_TEMPLATE extern
#    endif
#  endif

#  ifndef D_NO_EXPORT
#    define D_NO_EXPORT 
#  endif
#endif

#ifdef _MSC_VER
// Explicit template exports.
#include <string>
d_EXPORT_TEMPLATE template class d_EXPORT std::allocator<char>;
d_EXPORT_TEMPLATE template struct d_EXPORT std::char_traits<char>;
d_EXPORT_TEMPLATE template class d_EXPORT std::basic_string<char, std::char_traits<char>, std::allocator<char> >;
d_EXPORT_TEMPLATE template class d_EXPORT std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >;
d_EXPORT_TEMPLATE template class d_EXPORT std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >;
#endif

class d_EXPORT d
{
  std::vector<std::string> val;

 public:
  d();

  std::vector<std::string> const&
  getval() const;
};

#endif // D_H
