#include <string>
#include <ccspec/expectation/unexpected_throw.h>
#include <ccspec/support/exception.h>

namespace ccspec {
namespace expectation {

using std::exception;
using std::string;
using ccspec::support::Exception;

// Public methods.

UnexpectedThrow::UnexpectedThrow(const exception& cause)
    : Exception(desc(cause)) {}

// Private methods.

string UnexpectedThrow::desc(const exception& cause) {
    return string("Unexpected exception: ") + cause.what();
}

} // namespace expectation
} // namespace ccspec
