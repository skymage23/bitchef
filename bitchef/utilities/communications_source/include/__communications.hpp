
#include <future>
#include <thread>
#include "cpp_utilities.hpp"
namespace bitchef {
    namespace utilities{
        class Response {
            private:
                uint8_t** body;

            public:
                virtual uint8_t** getBody();
        };

        class __Communications {
            private:

            public:
                __Communications();
                ~__Communications();
                virtual Response sendAndAwaitResponse(uint8_t protobuf_blob[]);
                virtual std::future<Response> sendAsync(uint8_t protobuf_blob[]);
                //Difference: Sending and receiving
                //occurs on the same thread.
        };

    };
};