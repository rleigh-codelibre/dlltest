#include <string>
#include "bexport.h"

#ifdef b_BUILT_AS_STATIC
#  define b_EXPORT_TEMPLATE
#else
#  ifndef b_EXPORT_TEMPLATE
#    ifdef b_EXPORTS
        /* We are building this library */
#      define b_EXPORT_TEMPLATE
#    else
        /* We are using this library */
#      define b_EXPORT_TEMPLATE extern
#    endif
#  endif

#  ifndef B_NO_EXPORT
#    define B_NO_EXPORT 
#  endif
#endif

#ifdef _MSC_VER
// Explicit template exports.
#include <string>
b_EXPORT_TEMPLATE template class b_EXPORT std::allocator<char>;
b_EXPORT_TEMPLATE template struct b_EXPORT std::char_traits<char>;
b_EXPORT_TEMPLATE template class b_EXPORT std::basic_string<char, std::char_traits<char>, std::allocator<char> >;
#endif

class b_EXPORT b
{
  std::string val;

 public:
  b();

  std::string const&
  getval() const;
};
