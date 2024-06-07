#include <future>
#include "__communications.hpp"

namespace bitchef {
    namespace utilities { 
        class InetCommunications: public __Communications {
            public:
               InetCommunications();
               ~InetCommunications();
               Response sendAndAwaitResponse(uint8_t protobuf_blob[]);
               std::future<Response> sendAsync(uint8_t protobuf_blob[]);
        };
    };
};