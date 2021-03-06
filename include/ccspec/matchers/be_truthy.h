#ifndef INCLUDE_CCSPEC_MATCHERS_BE_TRUTHY_H_
#define INCLUDE_CCSPEC_MATCHERS_BE_TRUTHY_H_

#include <string>

#include "ccspec/matcher.h"

// Interface.

namespace ccspec {
namespace matchers {

class BeTruthy : public Matcher<BeTruthy> {
 public:
  static const BeTruthy& instance();

  template <typename T>
  bool match(const T& actual_value) const;
  std::string desc() const override;

 private:
  BeTruthy() = default;
  BeTruthy(const BeTruthy&) = delete;
  void operator =(const BeTruthy&) = delete;
};

extern const BeTruthy& be_truthy;

}  // namespace matchers
}  // namespace ccspec

// Implementation.

namespace ccspec {
namespace matchers {

// Public methods.

template <typename T>
bool BeTruthy::match(const T& actual_value) const {
  return !!actual_value;
}

}  // namespace matchers
}  // namespace ccspec

#endif  // INCLUDE_CCSPEC_MATCHERS_BE_TRUTHY_H_
