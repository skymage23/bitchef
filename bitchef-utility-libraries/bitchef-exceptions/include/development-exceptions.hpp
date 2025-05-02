#ifndef BITCHEF_DEVELOPMENT_EXCEPTIONS_HPP
#define BITCHEF_DEVELOPMENT_EXCEPTIONS_HPP

#include <stdexcept>
#include <string>
#include <stacktrace>

namespace bitchef {
    namespace exceptions {
        class DevelopmentException : public std::runtime_error {
            private:
                std::stacktrace::stacktrace stacktrace;
            public:
                DevelopmentException(const std::string& message);
                const std::stacktrace::stacktrace& get_stacktrace() const;
        };

        class NotImplementedException : public DevelopmentException {
            private:
                std::string prefix = "This function has not been implemented yet. Function name: ";
            public:
                NotImplementedException(const std::string& func_name);
        };
    }
}
#endif
