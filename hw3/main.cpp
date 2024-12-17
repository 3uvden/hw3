#include <iostream>
#include <Windows.h>

int main() {
   
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
   
    //������� 1 
    int x;
    std::cout << "������� ������������ �����: ";
    std::cin >> x;
    if (x > 99999 && x < 1000000) 
    {
        if (x / 100000 + x / 10000 % 10 + x / 1000 % 10 == x / 100 % 10 + x / 10 % 10 + x % 10)
            std::cout << "����� ����������!\n";
        else 
            std::cout << "����� �� ����������\n";
    }
    else 
    {
        std::cout << "������: ��������� ����� �� ������������\n";
    }

    //������� 2
    int number;
    int number1;
    int digits[4];
    std::cout << "������� ������������� �����: ";
    std::cin >> number;
    number1 = abs(number);
    if (number1 < 1000 || number1 > 9999)
        std::cout << "������: ��������� ����� �� �������������\n";
    else 
    {
        for (int i = 0; number1 != 0; number1 /= 10, i++)
            digits[i] = number1 % 10;
        number1 = digits[2] * 1000 + digits[3] * 100 + digits[0] * 10 + digits[1];
        std::cout << (number > 0 ? number1 : number1 * -1);
    }

    //������� 3
    int number2;

    std::cout << "\n������� ����������� �����: ";
    std::cin >> number2;

    if (number2 < 1000000 || number > 9999999) 
    {
        std::cout << "������: ����� ������ ���� �����������\n" << "\n";
        return 0;
    }

    int maxDigit = number2 % 10;
    number /= 10;

    while (number2 > 0) 
    {
        int digit = number2 % 10;
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        number2 /= 10;
    }
    std::cout << "���������� �����: " << maxDigit << "\n";

    return 0;
}