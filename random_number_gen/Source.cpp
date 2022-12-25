#include <iostream>
#include <random>
#include <vector>
#include <algorithm>
#include <iterator>


int main() {
    std::vector<int> values;  // Create a vector to store the random values

    /** Generate 25 random values between 0 and 60 */
    // uniformly-distributed integer random number generator that produces non-deterministic random numbers. 
    std::random_device rd;
    std::default_random_engine generator(rd());
    // Random number distribution that produces integer values according to a uniform discrete distribution with specified range. 
    std::uniform_int_distribution<int> distribution(0, 60);
    while (values.size() <= 25)
    {
        auto pushed_value = distribution(generator);
        // Check that there is no duplicates in the values
        if (std::find(values.begin(), values.end(), pushed_value) == values.end()) {
            values.push_back(pushed_value);
        }
    }

    // Sort the vector ascending
    std::sort(values.begin(), values.end());

    // Print the random values
    for (int value : values) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}
