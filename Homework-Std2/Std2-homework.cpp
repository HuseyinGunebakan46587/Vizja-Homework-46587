#include "Std2-homework.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

void fillArray(std::vector<std::vector<int>>& arr, int rows, int columns) {
    // Rastgele sayı üretmek için random seed ayarı
    std::srand(std::time(0));

    arr.resize(rows, std::vector<int>(columns));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            arr[i][j] = std::rand() % 100; // 0-99 arası rastgele sayılar
        }
    }
}

void printArray(const std::vector<std::vector<int>>& arr, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
