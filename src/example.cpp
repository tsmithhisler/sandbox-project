// A simple program that computes the square root of a number
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <optional>
#include <iostream>
#include <string>

std::optional<std::string> create(bool b) {
    if (b)
        return "Godzilla";
    return {};
}

int main()
{
    std::cout << "create(false) returned "
              << create(false).value_or("empty") << '\n';
 
    // optional-returning factory functions are usable as conditions of while and if
    if (auto str = create(true)) {
        std::cout << "create(true) returned " << *str << '\n';
    }
}
