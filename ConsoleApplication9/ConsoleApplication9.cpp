#include <iostream>
#include <Windows.h>

using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");
        const int ryad = 3;
        const int col= 5;
        double matrix[ryad][col];

        for (int i = 0; i < ryad; i++) {
            std::cout << "введите 5 элементов для строки " << i + 1 << ":\n";
            for (int j = 0; j < col; j++) {
                std::cin >> matrix[i][j];
            }
        }

        double sred[ryad] = { 0 };

        for (int i = 0; i < ryad; i++) {
            for (int j = 0; j < col; j++) {
                sred[i] += matrix[i][j];
            }
            sred[i] /= col;
        }

        for (int i = 0; i < ryad; i++) {
            std::cout << "cреднее арифметическое для строки " << i + 1 << ": " << sred[i] << std::endl;
        }

        return 0;
    }
           