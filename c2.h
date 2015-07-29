#include <vector>
#include <string>
#include "cexport.h"

#ifdef c_BUILT_AS_STATIC
#  define c_EXPORT_TEMPLATE
#else
#  ifndef c_EXPORT_TEMPLATE
#    ifdef c_EXPORTS
        /* We are building this library */
#      define c_EXPORT_TEMPLATE
#    else
        /* We are using this library */
#      define c_EXPORT_TEMPLATE extern
#    endif
#  endif

#  ifndef C_NO_EXPORT
#    define C_NO_EXPORT 
#  endif
#endif

#ifdef _MSC_VER
// Explicit template exports.
#include <string>
c_EXPORT_TEMPLATE template class c_EXPORT std::allocator<char>;
c_EXPORT_TEMPLATE template struct c_EXPORT std::char_traits<char>;
c_EXPORT_TEMPLATE template class c_EXPORT std::basic_string<char, std::char_traits<char>, std::allocator<char> >;
c_EXPORT_TEMPLATE template class c_EXPORT std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >;
c_EXPORT_TEMPLATE template class c_EXPORT std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > > >;
#endif

class c_EXPORT c2
{
  std::vector<std::string> val;

 public:
  c2();

  std::vector<std::string> const&
  getval() const;
};
