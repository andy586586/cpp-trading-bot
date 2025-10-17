#include "ordergateway.h"
#include <algorithm>
#include <iostream>
#include <numeric>

bool OrderGateway::recieveIncoming(Order const& order) {
    pending_orders.push_back(order);
}

bool OrderGateway::processIncoming(Order const& order) {
    auto order = pending_orders.pop_front();
    // TODO call next api for the min heap/db/other way we are processing orders
}

// TODO find ways to use constexpr, inline, __restrict