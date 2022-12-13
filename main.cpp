#include <iostream>
#include <vector>
#include "fatmanAlgorithm.h"

int main() {
    std::vector <int> fatmans {3, 1, 1, 5, 4};

    std::cout << fatmanAlgorithm(fatmans, 3);
}