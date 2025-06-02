#include <iostream>
#include <string>
#include <unordered_map>
#include "functions.h"

using namespace std;

// Зовнішня глобальна змінна
string inputString;

void input() {
    cout << "Введіть рядок: ";
    getline(cin, inputString);
}

int removeDigits(string& str) {
    unordered_map<char, int> freq;
    string newStr;
    int digitCount = 0;

    for (char ch : str) {
        if (isdigit(ch)) {
            freq[ch]++;
            digitCount++;
        } else {
            newStr += ch;
        }
    }

    str = newStr;

    // Знаходимо цифру з найбільшою частотою
    char maxDigit = '0';
    int maxCount = 0;

    for (const auto& pair : freq) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            maxDigit = pair.first;
        }
    }

    // Зберігаємо найчастішу цифру у змінну (для виведення)
    inputString += maxDigit;

    return digitCount;
}

char mostFrequentDigit() {
    return inputString.back(); // Останній символ — найчастіша цифра
}

void output(const string& str, int count, char mostFreq) {
    cout << "Рядок без цифр: " << str << endl;
    cout << "Кількість вилучених цифр: " << count << endl;
    cout << "Цифра з найбільшою частотою: " << mostFreq << endl;
}
