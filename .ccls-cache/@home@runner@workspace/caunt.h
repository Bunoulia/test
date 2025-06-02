#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>

// Оголошення змінної
extern std::string inputString;

// Прототипи функцій
void input();
int removeDigits(std::string& str);
char mostFrequentDigit();
void output(const std::string& str, int count, char mostFreq);

#endif
