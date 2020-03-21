/* Our global constant variables, each with a header guard of its own */

namespace constants
{
    #ifndef CONSTANTS
    inline constexpr int size{9};
    #define CONSTANTS
    #endif
}