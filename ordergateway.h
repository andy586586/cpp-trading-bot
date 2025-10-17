/*
Order gateway for compiler-optimized tradebook input/output processing component.
Gateway stores info incustom data structures, beginning with a an in memory standard column store db 
Built by @andy586586
Mainly used to benchmark against other implementations and versions
Trading logic and benchmarked statistics are obfuscated
*/



#ifndef ORDER_GATEWAY
#define ORDER_GATEWAY

#include <deque>

class OrderGateway {
    public:
        OrderGateway();
        virtual bool recieveIncoming(Order const& incoming);
        virtual bool processNext();
        virtual bool sendNext();
        virtual bool processIncoming(Order const& order);
        virtual bool recieveOutgoing(Order const& order);
        virtual bool sendOutgoing(Order const& order);
    private:
        std::deque<Order> pending_orders;
        uint32_t order_volume;
        constexpr int len = 4; // constexpr compiler optimization, now array can be intiialized faster
        int arr[len];

}

#endif ORDER_GATEWAY