#ifndef AUTOWIG__CLANGLITE
#define AUTOWIG__CLANGLITE

#include <boost/python.hpp>
#include <type_traits>
#include <clanglite/tool.h>

namespace autowig
{
     template<class T> struct Held {
        typedef T* Type;
        static bool const is_class = false;
    };
}

#endif