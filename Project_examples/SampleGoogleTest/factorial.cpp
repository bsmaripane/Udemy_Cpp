//
// pch.cpp
//

#include "pch.h"
#include "factorial.h"
#include <stdexcept>

int factorial(int n) {
    if (n < 0) throw std::invalid_argument("Negative input not allowed");
    return (n == 0 || n == 1) ? 1 : n * factorial(n - 1);
}
