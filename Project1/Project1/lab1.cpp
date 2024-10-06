#include <iostream>
#include <cmath> // Для использования std::floor
#include <limits> // Для проверки ввода

// Функция для получения дробной части числа
double fraction(double x) {
    return x - std::floor(x); // Вычитаем целую часть из числа
}

// Функция для преобразования символа цифры в число
int charToNum(char x) {
    // Проверяем, что символ является цифрой
    if (x >= '0' && x <= '9') {
        return x - '0'; // Преобразуем символ в соответствующее число
    }
    else {
        std::cerr << "Ошибка: символ не является цифрой!\n";
        return -1; // Возвращаем -1 в случае некорректного ввода
    }
}

// Функция для проверки, является ли число двузначным
bool is2Digits(int x) {
    return (x >= 10 && x <= 99) || (x <= -10 && x >= -99);
}

// Функция для проверки, входит ли число в диапазон [min(a, b), max(a, b)]
bool isInRange(int a, int b, int num) {
    int minVal = std::min(a, b); // Определяем минимальную границу
    int maxVal = std::max(a, b); // Определяем максимальную границу
    return num >= minVal && num <= maxVal;
}

// Функция для проверки равенства трёх чисел
bool isEqual(int a, int b, int c) {
    return a == b && b == c; // Возвращает true, если все три числа равны
}

// Функция для корректного ввода числа с проверкой
double getInput(const std::string& prompt) {
    double num;
    while (true) {
        std::cout << prompt;
        std::cin >> num;

        if (std::cin.fail()) {
            std::cin.clear(); // Сбрасываем флаг ошибки
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Очищаем поток
            std::cout << "Ошибка ввода. Введите число заново.\n";
        }
        else {
            return num;
        }
    }
}

// Функция для корректного ввода символа с проверкой
char getCharInput(const std::string& prompt) {
    char ch;
    while (true) {
        std::cout << prompt;
        std::cin >> ch;
        if (std::cin.fail() || std::cin.peek() != '\n') {
            std::cin.clear(); // Сбрасываем флаг ошибки
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Очищаем поток
            std::cout << "Ошибка ввода. Введите один символ.\n";
        }
        else {
            return ch;
        }
    }
}

// Функция для корректного ввода целого числа с проверкой
int getIntInput(const std::string& prompt) {
    int num;
    while (true) {
        std::cout << prompt;
        std::cin >> num;

        if (std::cin.fail()) {
            std::cin.clear(); // Сбрасываем флаг ошибки
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Очищаем поток
            std::cout << "Ошибка ввода. Введите целое число заново.\n";
        }
        else {
            return num;
        }
    }
}

int main() {
    setlocale(LC_ALL, "RUSSIAN");

    std::cout << "Программа для выполнения пяти задач:\n";
    std::cout << "1. Нахождение дробной части числа.\n";
    std::cout << "2. Преобразование символа цифры в число.\n";
    std::cout << "3. Проверка, является ли число двузначным.\n";
    std::cout << "4. Проверка, входит ли число в указанный диапазон.\n";
    std::cout << "5. Проверка равенства трёх чисел.\n";

    // Задача 1: Дробная часть числа
    double number = getInput("Введите вещественное число: ");
    double resultFraction = fraction(number);
    std::cout << "Дробная часть числа: " << resultFraction << std::endl;

    // Задача 2: Преобразование символа цифры в число
    char digit = getCharInput("Введите символ цифры (0-9): ");
    int resultNum = charToNum(digit);
    if (resultNum != -1) {
        std::cout << "Число, соответствующее символу '" << digit << "': " << resultNum << std::endl;
    }

    // Задача 3: Проверка двузначного числа
    int integer = getIntInput("Введите целое число: ");
    bool isTwoDigits = is2Digits(integer);
    if (isTwoDigits) {
        std::cout << "Число " << integer << " является двузначным.\n";
    }
    else {
        std::cout << "Число " << integer << " не является двузначным.\n";
    }

    // Задача 4: Проверка принадлежности диапазону
    int a = getIntInput("Введите левую границу диапазона: ");
    int b = getIntInput("Введите правую границу диапазона: ");
    int num = getIntInput("Введите число для проверки: ");
    bool inRange = isInRange(a, b, num);
    if (inRange) {
        std::cout << "Число " << num << " находится в диапазоне [" << std::min(a, b) << ", " << std::max(a, b) << "].\n";
    }
    else {
        std::cout << "Число " << num << " не находится в диапазоне [" << std::min(a, b) << ", " << std::max(a, b) << "].\n";
    }

    // Задача 5: Проверка равенства трёх чисел
    int x = getIntInput("Введите первое число: ");
    int y = getIntInput("Введите второе число: ");
    int z = getIntInput("Введите третье число: ");
    bool equal = isEqual(x, y, z);
    if (equal) {
        std::cout << "Все три числа равны.\n";
    }
    else {
        std::cout << "Числа не равны.\n";
    }

    return 0;
}
