#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string inputFileName = "input.txt";  // Replace with your input file name
    std::string outputFileName = "output.txt";  // Replace with your output file name

    // Reading from the input file
    std::ifstream inputFile(inputFileName);
    if (!inputFile.is_open()) {
        std::cerr << "Error opening input file" << std::endl;
        return 1;
    }

    // Writing to the output file
    std::ofstream outputFile(outputFileName);
    if (!outputFile.is_open()) {
        std::cerr << "Error opening output file" << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        // Read line from input file and write to output file
        outputFile << line << std::endl;
    }

    // Close the files
    inputFile.close();
    outputFile.close();

    std::cout << "Content has been copied from " << inputFileName << " to " << outputFileName << std::endl;

    return 0;
}
