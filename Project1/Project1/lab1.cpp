#include <iostream>
#include <cmath> // Для использования std::floor
#include <string>
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
// Функция для нахождения модуля числа
int abs(int x) {
    if (x < 0)
        return -x;
    return x;
}

// Функция для проверки делимости на 3 или 5, но не на оба сразу
bool is35(int x) {
    if (x % 3 == 0 && x % 5 == 0) {
        return false;  // Если делится и на 3, и на 5
    }
    else if (x % 3 == 0 || x % 5 == 0) {
        return true;   // Если делится на 3 или на 5
    }
    return false;      // Если не делится ни на 3, ни на 5
}

// Функция для нахождения максимума из трех чисел
int max3(int x, int y, int z) {
    int max = (x > y) ? x : y;
    return (max > z) ? max : z;
}

// Функция для нахождения суммы двух чисел с условием
int sum2(int x, int y) {
    int sum = x + y;
    if (sum >= 10 && sum <= 19) {
        return 20;
    }
    return sum;
}

// Функция для возвращения названия дня недели
std::string day(int x) {
    switch (x) {
        case 1: return "понедельник";
        case 2: return "вторник";
        case 3: return "среда";
        case 4: return "четверг";
        case 5: return "пятница";
        case 6: return "суббота";
        case 7: return "воскресенье";
        default: return "это не день недели";
    }
}

// Функция для ввода числа с проверкой на корректность
int inputNumber() {
    int x;
    while (true) {
        std::cout << "Введите целое число: ";
        std::cin >> x;

        if (std::cin.fail()) {  // Проверка на некорректный ввод
            std::cin.clear();   // Сброс флага ошибки
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Очистка буфера ввода
            std::cout << "Ошибка: введите корректное целое число." << std::endl;
        }
        else {
            break;  // Корректный ввод, выходим из цикла
        }
    }
    return x;
}
std::string listNums(int x) {
    std::string result; // Строка для хранения результата

    for (int i = 0; i <= x; ++i) { // Цикл от 0 до x
        result += std::to_string(i); // Преобразуем число в строку и добавляем к результату
        if (i < x) {
            result += " "; // Добавляем пробел, если это не последнее число
        }
    }

    return result; // Возвращаем итоговую строку
}

// Функция для получения строки с четными числами от 0 до x
std::string chet(int x) {
    std::string result; // Строка для хранения результата

    for (int i = 0; i <= x; i += 2) { // Цикл от 0 до x, шаг 2 (четные числа)
        result += std::to_string(i); // Преобразуем число в строку и добавляем к результату
        if (i + 2 <= x) {
            result += " "; // Добавляем пробел, если это не последнее четное число
        }
    }

    return result; // Возвращаем итоговую строку
}

// Функция для подсчета количества цифр в числе
int numLen(long x) {
    // Обрабатываем случай 0 отдельно, так как 0 имеет 1 цифру
    if (x == 0) return 1;

    int length = 0; // Счетчик для длины числа
    // Приводим x к положительному значению, если оно отрицательное
    x = x < 0 ? -x : x;

    while (x > 0) { // Цикл до тех пор, пока число не станет 0
        x /= 10; // Делим на 10
        length++; // Увеличиваем счетчик
    }

    return length; // Возвращаем длину
}

// Функция для вывода квадрата из символов '*'
void square(int x) {
    for (int i = 0; i < x; ++i) { // Внешний цикл для высоты
        for (int j = 0; j < x; ++j) { // Внутренний цикл для ширины
            std::cout << "*"; // Выводим символ '*'
        }
        std::cout << std::endl; // Переход на новую строку после каждого ряда
    }
}

// Функция для вывода правого треугольника из символов '*'
void rightTriangle(int x) {
    for (int i = 1; i <= x; ++i) { // Внешний цикл для высоты
        // Выводим пробелы перед символами '*'
        for (int j = 0; j < x - i; ++j) {
            std::cout << " "; // Выводим пробел
        }
        // Выводим символы '*'
        for (int j = 0; j < i; ++j) {
            std::cout << "*"; // Выводим символ '*'
        }
        std::cout << std::endl; // Переход на новую строку после каждого ряда
    }
}

// Функция для ввода целого числа с проверкой

int findFirst(int arr[], int size, int x) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == x) {
            return i; // Возвращаем индекс первого вхождения
        }
    }
    return -1; // Если число не найдено, возвращаем -1
}

// Функция для поиска наибольшего по модулю значения в массиве
int maxAbs(int arr[], int size) {
    if (size == 0) {
        std::cout << "Массив пустой. Невозможно найти максимальное значение." << std::endl;
        return 0; // Защита от пустого массива
    }

    int maxValue = abs(arr[0]); // Начальное значение - модуль первого элемента
    for (int i = 1; i < size; ++i) {
        if (abs(arr[i]) > maxValue) {
            maxValue = abs(arr[i]); // Находим максимальное по модулю значение
        }
    }
    return maxValue;
}

// Функция для добавления массива ins в массив arr на позицию pos
int* add(int arr[], int sizeArr, int ins[], int sizeIns, int pos) {
    if (pos < 0 || pos > sizeArr) {
        std::cout << "Некорректная позиция для вставки!" << std::endl;
        return nullptr;
    }

    int newSize = sizeArr + sizeIns;
    int* newArr = new int[newSize];

    // Копируем элементы до позиции вставки
    for (int i = 0; i < pos; ++i) {
        newArr[i] = arr[i];
    }

    // Вставляем элементы массива ins
    for (int i = 0; i < sizeIns; ++i) {
        newArr[pos + i] = ins[i];
    }

    // Копируем оставшиеся элементы массива arr
    for (int i = pos; i < sizeArr; ++i) {
        newArr[i + sizeIns] = arr[i];
    }

    return newArr;
}

// Функция для реверса массива
int* reverseBack(int arr[], int size) {
    if (size <= 0) {
        std::cout << "Массив пуст или имеет некорректный размер!" << std::endl;
        return nullptr;
    }

    int* reversedArr = new int[size];
    for (int i = 0; i < size; ++i) {
        reversedArr[i] = arr[size - 1 - i]; // Копируем элементы в обратном порядке
    }

    return reversedArr;
}

// Функция для поиска всех вхождений числа x в массив arr
int* findAll(int arr[], int size, int x, int& foundCount) {
    foundCount = 0;

    // Считаем количество вхождений
    for (int i = 0; i < size; ++i) {
        if (arr[i] == x) {
            foundCount++;
        }
    }

    if (foundCount == 0) {
        return nullptr; // Если нет вхождений, возвращаем nullptr
    }

    // Создаем массив для индексов
    int* indices = new int[foundCount];
    int index = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] == x) {
            indices[index++] = i;
        }
    }

    return indices;
}

// Функция для безопасного ввода целого числа
int safeInput() {
    int value;
    while (true) {
        std::cin >> value;
        if (!std::cin.fail()) { // Если ввод прошел успешно
            break;
        }
        else {
            std::cout << "Некорректный ввод, пожалуйста, введите целое число: ";
            std::cin.clear(); // Очищаем флаг ошибки
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Очищаем буфер ввода
        }
    }
    return value;
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
    std::cout << "Программа с несколькими функциями: модуль числа, проверка делимости, нахождение максимума из трёх чисел, двойная сумма и день недели." << std::endl;


    // Первая задача: модуль числа
    std::cout << "\nЗадача 1: Модуль числа." << std::endl;
    int number1 = inputNumber(); // Ввод числа с проверкой
    int absResult = abs(number1); // Нахождение модуля числа
    std::cout << "Модуль числа: " << absResult << std::endl;

    // Вторая задача: делимость на 3 или 5
    std::cout << "\nЗадача 2: Проверка делимости на 3 или 5." << std::endl;
    int number2 = inputNumber(); // Ввод числа с проверкой
    bool isDivisible35 = is35(number2);  // Проверка на делимость
    if (isDivisible35) {
        std::cout << "Число делится на 3 или 5, но не на оба сразу." << std::endl;
    }
    else {
        std::cout << "Число либо не делится на 3 и 5, либо делится на оба сразу." << std::endl;
    }

    // Третья задача: нахождение максимума из трех чисел
    std::cout << "\nЗадача 3: Тройной максимум." << std::endl;
    std::cout << "Введите три числа для нахождения максимума." << std::endl;
    int x1 = inputNumber();  // Ввод первого числа
    int y1 = inputNumber();  // Ввод второго числа
    int z1 = inputNumber();  // Ввод третьего числа
    int maxResult = max3(x1, y1, z1);  // Нахождение максимума из трех чисел
    std::cout << "Максимум из трёх чисел: " << maxResult << std::endl;

    // Четвертая задача: двойная сумма
    std::cout << "\nЗадача 4: Двойная сумма." << std::endl;
    std::cout << "Введите два числа для вычисления суммы." << std::endl;
    int a1 = inputNumber();  // Ввод первого числа
    int b1 = inputNumber();  // Ввод второго числа
    int sumResult = sum2(a1, b1);  // Нахождение суммы двух чисел
    std::cout << "Результат суммы: " << sumResult << std::endl;

    // Пятая задача: день недели
    std::cout << "\nЗадача 5: Определение дня недели." << std::endl;
    int dayNumber = inputNumber(); // Ввод числа, обозначающего день недели
    std::string dayResult = day(dayNumber); // Получение названия дня недели
    std::cout << "Результат: " << dayResult << std::endl;



    std::cout << "Задание 1. Числа подряд: ";
    // Получаем корректный ввод для последовательных чисел
    int x2 = inputNumber();
    // Получаем и выводим все числа от 0 до x
    std::string allNumbers = listNums(x2);
    std::cout << "Все числа от 0 до " << x2 << ": \"" << allNumbers << "\"" << std::endl;

    std::cout << "Задание 2. Числа наоборот: ";
    // Получаем корректный ввод для четных чисел
    int evenX = inputNumber();
    // Получаем и выводим все четные числа от 0 до evenX
    std::string evenNumbers = chet(evenX);
    std::cout << "Четные числа от 0 до " << evenX << ": \"" << evenNumbers << "\"" << std::endl;

    std::cout << "Задание 3. Длина числа: ";
    // Запрашиваем число для подсчета количества цифр
    long num2;
    std::cout << "Введите число для подсчета количества цифр: ";
    std::cin >> num2;

    // Получаем и выводим количество цифр в числе
    int length = numLen(num2);
    std::cout << "Количество цифр в числе " << num2 << ": " << length << std::endl;

    std::cout << "Задание 4. Квадрад: ";
    // Запрашиваем размер квадрата
    int squareSize;
    std::cout << "Введите размер квадрата (целое число больше 0): ";
    std::cin >> squareSize;

    // Проверяем, что размер квадрата больше 0
    if (squareSize > 0) {
        std::cout << "Квадрат из символов '*':" << std::endl;
        square(squareSize); // Вызываем функцию для вывода квадрата
    }
    else {
        std::cout << "Размер квадрата должен быть больше 0." << std::endl;
    }

    std::cout << "Задание 5. Правый треугольник: ";
    // Запрашиваем размер треугольника
    int triangleSize;
    std::cout << "Введите размер правого треугольника (целое число больше 0): ";
    std::cin >> triangleSize;

    // Проверяем, что размер треугольника больше 0
    if (triangleSize > 0) {
        std::cout << "Правый треугольник из символов '*':" << std::endl;
        rightTriangle(triangleSize); // Вызываем функцию для вывода треугольника
    }
    else {
        std::cout << "Размер треугольника должен быть больше 0." << std::endl;
    }
    int choice;
    do {
        std::cout << "Выберите задание: " << std::endl;
        std::cout << "1) Поиск первого вхождения числа в массив." << std::endl;
        std::cout << "2) Поиск наибольшего по модулю значения в массиве." << std::endl;
        std::cout << "3) Вставка одного массива в другой." << std::endl;
        std::cout << "4) Реверс массива." << std::endl;
        std::cout << "5) Поиск всех вхождений числа в массив." << std::endl;
        std::cout << "0) Выйти из программы." << std::endl;
        std::cout << "Ваш выбор: ";
        choice = safeInput();

        if (choice == 1) {
            // Задание 1 - Поиск первого вхождения числа в массив
            int size;
            std::cout << "Введите размер массива: ";
            size = safeInput();

            if (size <= 0) {
                std::cout << "Размер массива должен быть положительным!" << std::endl;
                continue;
            }

            int* arr = new int[size];
            std::cout << "Введите элементы массива:" << std::endl;
            for (int i = 0; i < size; ++i) {
                std::cout << "Элемент " << i + 1 << ": ";
                arr[i] = safeInput();
            }

            int x;
            std::cout << "Введите число для поиска его первого вхождения в массив: ";
            x = safeInput();

            int index = findFirst(arr, size, x);
            if (index != -1) {
                std::cout << "Первое вхождение числа " << x << " находится на индексе: " << index << std::endl;
            }
            else {
                std::cout << "Число " << x << " не найдено в массиве." << std::endl;
            }

            delete[] arr; // Освобождаем память

        }
        else if (choice == 2) {
            // Задание 2 - Поиск наибольшего по модулю значения в массиве
            int size;
            std::cout << "Введите размер массива: ";
            size = safeInput();

            if (size <= 0) {
                std::cout << "Размер массива должен быть положительным!" << std::endl;
                continue;
            }

            int* arr = new int[size];
            std::cout << "Введите элементы массива:" << std::endl;
            for (int i = 0; i < size; ++i) {
                std::cout << "Элемент " << i + 1 << ": ";
                arr[i] = safeInput();
            }

            int maxAbsValue = maxAbs(arr, size);
            std::cout << "Наибольшее по модулю значение в массиве: " << maxAbsValue << std::endl;

            delete[] arr; // Освобождаем память

        }
        else if (choice == 3) {
            // Задание 3 - Вставка одного массива в другой
            int sizeArr, sizeIns, pos;

            // Ввод первого массива
            std::cout << "Введите размер первого массива: ";
            sizeArr = safeInput();

            if (sizeArr <= 0) {
                std::cout << "Размер массива должен быть положительным!" << std::endl;
                continue;
            }

            int* arr = new int[sizeArr];
            std::cout << "Введите элементы первого массива:" << std::endl;
            for (int i = 0; i < sizeArr; ++i) {
                std::cout << "Элемент " << i + 1 << ": ";
                arr[i] = safeInput();
            }

            // Ввод второго массива
            std::cout << "Введите размер второго массива (для вставки): ";
            sizeIns = safeInput();

            if (sizeIns <= 0) {
                std::cout << "Размер массива должен быть положительным!" << std::endl;
                delete[] arr;
                continue;
            }

            int* ins = new int[sizeIns];
            std::cout << "Введите элементы второго массива:" << std::endl;
            for (int i = 0; i < sizeIns; ++i) {
                std::cout << "Элемент " << i + 1 << ": ";
                ins[i] = safeInput();
            }

            // Ввод позиции для вставки
            std::cout << "Введите позицию для вставки второго массива: ";
            pos = safeInput();

            // Выполняем вставку
            int* newArr = add(arr, sizeArr, ins, sizeIns, pos);
            if (newArr != nullptr) {
                std::cout << "Результирующий массив: ";
                for (int i = 0; i < sizeArr + sizeIns; ++i) {
                    std::cout << newArr[i] << " ";
                }
                std::cout << std::endl;
                delete[] newArr; // Освобождаем память нового массива
            }

            delete[] arr; // Освобождаем память первого массива
            delete[] ins; // Освобождаем память второго массива

        }
        else if (choice == 4) {
            // Задание 4 - Реверс массива
            int size;
            std::cout << "Введите размер массива: ";
            size = safeInput();

            if (size <= 0) {
                std::cout << "Размер массива должен быть положительным!" << std::endl;
                continue;
            }

            int* arr = new int[size];
            std::cout << "Введите элементы массива:" << std::endl;
            for (int i = 0; i < size; ++i) {
                std::cout << "Элемент " << i + 1 << ": ";
                arr[i] = safeInput();
            }

            int* reversedArr = reverseBack(arr, size);
            if (reversedArr != nullptr) {
                std::cout << "Массив в обратном порядке: ";
                for (int i = 0; i < size; ++i) {
                    std::cout << reversedArr[i] << " ";
                }
                std::cout << std::endl;
                delete[] reversedArr; // Освобождаем память реверсированного массива
            }

            delete[] arr; // Освобождаем память оригинального массива

        }
        else if (choice == 5) {
            // Задание 5 - Поиск всех вхождений числа в массив
            int size;
            std::cout << "Введите размер массива: ";
            size = safeInput();

            if (size <= 0) {
                std::cout << "Размер массива должен быть положительным!" << std::endl;
                continue;
            }

            int* arr = new int[size];
            std::cout << "Введите элементы массива:" << std::endl;
            for (int i = 0; i < size; ++i) {
                std::cout << "Элемент " << i + 1 << ": ";
                arr[i] = safeInput();
            }

            int x;
            std::cout << "Введите число для поиска всех его вхождений в массиве: ";
            x = safeInput();

            int foundCount;
            int* indices = findAll(arr, size, x, foundCount);
            if (indices != nullptr) {
                std::cout << "Число " << x << " встречается на следующих индексах: ";
                for (int i = 0; i < foundCount; ++i) {
                    std::cout << indices[i] << " ";
                }
                std::cout << std::endl;
                delete[] indices; // Освобождаем память массива индексов
            }
            else {
                std::cout << "Число " << x << " не найдено в массиве." << std::endl;
            }

            delete[] arr; // Освобождаем память массива
        }
        else if (choice != 0) {
            std::cout << "Некорректный выбор, попробуйте снова." << std::endl;
        }

    } while (choice != 0);

    std::cout << "Программа завершена." << std::endl;
    return 0;



}
