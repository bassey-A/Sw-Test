#include "fxns.hh"

int sum_array(int* array, uint32_t array_length) {
    int sum = 0;
    for (uint32_t i = 0; i < array_length; i++) {
        sum += array[i];
    }
    return sum;
}
