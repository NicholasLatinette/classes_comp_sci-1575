/* Implement your MyException::what() function by overriding it here:
 */

#include "my_exception.h"

const char * MyException::what() const noexcept
{
    return "Exception 1";
}
// implement here -- see class notes and code for example
