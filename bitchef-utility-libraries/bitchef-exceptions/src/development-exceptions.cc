#include "development-exceptions.hpp"

namespace bitchef {
    namespace exceptions {
        DevelopmentException::DevelopmentException(const std::string& message) :
            std::runtime_error(message), stacktrace(std::stacktrace::current()) {}

        const std::stacktrace::stacktrace& DevelopmentException::get_stacktrace() const {
            return stacktrace;
        }

        NotImplementedException::NotImplementedException(const std::string& func_name) :
            DevelopmentException(prefix + func_name) {}
    }
}