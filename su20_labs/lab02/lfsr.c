#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "lfsr.h"

void lfsr_calculate(uint16_t *reg) {
    /* YOUR CODE HERE */
    uint16_t bit = 0;
    uint16_t index[4] = {0, 2, 3, 5};

    for (int i=0; i < 4; i++) {
        bit = bit ^ get_bit(*reg, index[i]);
    }

    *reg = *reg >> 1;
    set_bit(reg, 15, bit);
}

// Return the nth bit of x.
// Assume 0 <= n <= 31
uint16_t get_bit(uint16_t x,
                 uint16_t n) {
    // YOUR CODE HERE
    // Returning -1 is a placeholder (it makes
    // no sense, because get_bit only returns
    // 0 or 1)
    uint16_t bit;
    bit = (x >> n) & 1;
    return bit;
}
// Set the nth bit of the value of x to v.
// Assume 0 <= n <= 31, and v is 0 or 1
void set_bit(uint16_t * x,
             uint16_t n,
             uint16_t v) {
    // YOUR CODE HERE
    uint16_t bit = get_bit(*x, n);
    if (bit == 1 && v == 0) {
        uint16_t tmp = ~(1 << n);
        (*x) = (*x) & tmp; 
    }

    if (bit == 0 && v == 1) {
        uint16_t tmp = 1 << n;
        (*x) = (*x) | tmp;
    }

}

