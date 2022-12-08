#include <iostream>

void convertNumber(int number)
{
    for (int i=134217728; i>0; i/=2)
    {
        if (i == 8388608 or i == 524288 or i == 32768 or i == 2048 or i== 128 or i == 8)
            std::cout << " ";

        if (number >= i)
        {
            number -= i;
            std::cout << true;
        }
        else
            std::cout << false;

    }
    std::cout << "\n";
}

int main()
{
    std::cout << "Enter a number from 0 to 134 217 728: ";
    int number;
    std::cin >> number;

    convertNumber(number);
    main();
}
