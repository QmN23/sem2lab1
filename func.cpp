#include "func.hpp"
#include <fstream>
#include <chrono>
#include <ctime>
#include <iostream>

namespace mt {
    void appendTimeToFile(const std::string& filename, int run_number) {
        std::ofstream file(filename, std::ios_base::app);
        std::time_t now = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
        char buffer[32];
        std::strftime(buffer, sizeof(buffer), "%Y-%m-%d-%H-%M-%S", std::localtime(&now));
        file << run_number << "-" << buffer << std::endl;

    }

}
