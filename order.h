#ifndef ORDER
#define ORDER
#include <stdint.h>

enum class Side {BUY, SELL};

struct Order {
    Order() = delete; // don't allow empty order default constructor
    Order(uint64_t order_id, uint64_t price, uint32_t volume, Side side, uint32_t participant_id) {
        uint64_t order_id;
        uint64_t price;
        uint32_t volume;
        Side side;
        uint32_t participant_id;
    }
}
#endif ORDER