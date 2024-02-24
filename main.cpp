#include "func.hpp"
#include <iostream>
#include <fstream>

int main() {
    std::ifstream input_file("last_run_number.txt");
    int run_number = 0; 
    if (input_file) {
        input_file >> run_number; 
        input_file.close();
    }
    run_number++;

    std::ofstream output_file("last_run_number.txt");
    if (output_file) {
        output_file << run_number; 
        output_file.close();
    }
    mt::appendTimeToFile("logfile.txt", run_number);

    return 0;
}
