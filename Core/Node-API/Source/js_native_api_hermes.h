#include <jsi/jsi.h>

namespace hermes {

class JsRuntime {
public:
    facebook::jsi::Runtime& GetRuntime();
}

} // namespace hermes