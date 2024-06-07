#include <future>
#include "__communications.hpp"

namespace bitchef {
    namespace utilities { 
        class SocketCommunications: public __Communications {
            public:
               SocketCommunications();
               ~SocketCommunications();
               Response sendAndAwaitResponse(uint8_t protobuf_blob[]);
               std::future<Response> sendAsync(uint8_t protobuf_blob[]);
        };
    };
};