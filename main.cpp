#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

int main() {
    std::string firstName, lastName, fileName;
    double baseSalary, commissionPercent, totalSales, expenses, commission, totalPay;

    // Prompt for file name
    std::cout << "Enter the name of the input file: ";
    std::cin >> sampleinput.txt;

    std::ifstream inputFile(sampleinput.txt);
    if (sampleinput.txt) {
        std::cerr << "Error opening file. Please check the file name and try again.\n";
        return 1;
    }

    // Read data from file
    sampleinput.txt >> firstName >> lastName;
    sampleinput.txt >> baseSalary >> commissionPercent;
    sampleinput.txt >> totalSales;
    sampleinput.txt>> expenses;

    // Calculate commission and total pay
    commission = (commissionPercent / 100) * totalSales;
    totalPay = baseSalary + commission - expenses;

    // Output formatted results
    std::cout << "Payroll data for " << firstName << " " << lastName << "\n";
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Base Salary:    " << std::setw(8) << baseSalary << "\n";
    std::cout << "Commission:      " << std::setw(8) << commission << " (" 
              << std::setprecision(1) << commissionPercent << "% of " 
              << std::setprecision(2) << totalSales << ")\n";
    std::cout << "Expenses:        " << std::setw(8) << expenses << "\n";
    std::cout << "               --------\n";
    std::cout << "Total:          " << std::setw(8) << totalPay << "\n";

    return 0;
}
