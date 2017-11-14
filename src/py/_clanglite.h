#ifndef AUTOWIG__CLANGLITE
#define AUTOWIG__CLANGLITE

#include <boost/python.hpp>
#include <type_traits>
#include <clanglite/tool.h>
#include <memory>

namespace autowig
{
     template<class T> struct Held {
        typedef std::shared_ptr< T > Type;
        static bool const is_class = true;
    };
}

#endif