#include <iostream>

int strlen (char str[])
{
    int i = 0;

    while(str[i] != '\0')
    {
       i++;
    }

    return i;
}

int main()
{

    char string[] = "Christiane";

    std::cout << "String: " << string << "\n";
    std::cout << "Quantidade de caracteres: " << strlen(string) << "\n";

    return 0;
}

