#include <iostream>
#include <string>
#include <regex>

//Организовать ввод двухзначного натурального числа с клавиатуры.
//Программа должна определить наименьшую и наибольшую цифры, которые входят в состав данного натурального числа.

int inputInt(std::string);

int main()
{
    setlocale(LC_ALL, "ru");
    int num = inputInt("Введите натуральное число от 10 до 99"),a= 0,b = 0;
    
    a = (num / 10) % 10;
    b = num % 10;
    if (a>b) {
        std::cout << "Большая цифра: " << a << std::endl;
        std::cout << "Меньшая цифра: " << b << std::endl;
    }
    else {
        if (a < b) {
            std::cout << "Большая цифра: " << b << std::endl;
            std::cout << "Меньшая цифра: " << a << std::endl;
        }
        else
        {
            std::cout << "Цифры равны";
        }
    }
    return 0;
}

int inputInt(std::string textReq = "Enter an integer number") { // textReq текстовый запрос у пользователя
    std::string number;
    std::regex reg("^[0-9]"); //регулярное выражение
    while (true)
    {
        std::cout << textReq << std::endl;
        std::cin >> number;
        if (std::regex_search(number, reg) && stoi(number) > 9 && stoi(number) < 100) {
            return stoi(number); //преобразование string в int. С++ 11
        }
    }
}