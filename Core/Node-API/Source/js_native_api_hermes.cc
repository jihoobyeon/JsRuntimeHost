#include <jsi/jsi.h>

namespace hermes {

class JsRuntime {
    facebook::jsi::Runtime& GetRuntime() {
        facebook::jsi::Runtime runtime;
        return runtime;
    }
}

} // namespace hermes