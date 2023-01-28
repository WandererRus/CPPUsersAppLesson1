// CPPUsersAppLesson1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

std::string isPalindrom(char* p, int size)
{
    char* pstart = p;
    char* pend = p + size - 1;
    for (int i = 0; i < size/2; i++)
    {
        if (*(pstart + i) != *(pend - i))
            return "false";
    }

    return "true";
    
}

int main()
{
    //Task1
    /*char mystr[] = {'a','b','c',' ','a','b','c',' ','a','b','c',' ','a','b','c',' ','d','\0'};
    char* pmystr = mystr;
    int sizemassive = strlen(mystr);
    for (int i = 0; i < sizemassive; i++)
    {
        if (*(pmystr + i) == ' ')
            *(pmystr + i) = ' \t';
    }   
    std::cout << pmystr;
    
    */
    //Task2
    /*char mystr[] = {'a','b','c','4','A','B','c','3','a','b','c','!','a','b','c','&','d','\0'};
    
    char* pmystr = mystr;
    int sizemassive = strlen(mystr);
    
    int charKey = 0, countDigital = 0, countLetter = 0, countSpecial = 0;
    for (int i = 0; i < sizemassive; i++)
    {
        charKey = int(*(mystr+i));
        if (charKey >= 48 && charKey <= 57)
        {
            countDigital++;
        }
        else if (charKey >= 97 && charKey <= 122 || charKey >= 65 && charKey <= 90)
        {
            countLetter++;
        }
        else
        {
            countSpecial++;
        }
    }
    std::cout << "Count chars: " << sizemassive << "\n";
    std::cout << "Digital count: " << countDigital << "\n";
    std::cout << "Letter count: " << countLetter << "\n";
    std::cout << "Special count: " << countSpecial;
    */
    //Task3
    /*char mystr[] = {' ',' ','a','b','c',' ',' ','a','.','b','c',' ','a','b','c',' ','a','b','c',' ','d','\0'};
    char* pmystr = mystr;
    int sizemassive = strlen(mystr);
    int wordsCount = 0;
    bool letterExist = false;
    for (int i = 0; i < sizemassive; i++)
    {
        if (!letterExist && int(*(pmystr + i)) >= 65 && int(*(pmystr + i)) <= 90 || !letterExist && int(*(pmystr + i)) >= 97 && int(*(pmystr + i)) <= 122)
        {
            letterExist = true;
            wordsCount++;
        }
        else if (int(*(pmystr + i)) < 65 || int(*(pmystr + i)) > 90 && int(*(pmystr + i)) < 97 || int(*(pmystr + i)) > 122)
        {            
            letterExist = false;
        }
        
    }
    std::cout << wordsCount;*/
    
    //Task4    

    /*char nepal[] = {'к','о','т','ё','н','о','к'};
    char pal[] = { 'ш','а','л ','а','ш'};
    char palchet[] = { 'ш','а','л','л','а','ш' };
    char* pnepal = nepal;
    char* ppal = pal;
    char* ppalchet = palchet;
    std::cout << isPalindrom(pnepal, strlen(nepal)) << "\n";
    std::cout << isPalindrom(ppal, strlen(pal)) << "\n";
    std::cout << isPalindrom(ppalchet, strlen(palchet)) << "\n";*/

    //Task5
    char mystr[] = {' ',' ','c','b','c',' ',' ','a','.','b','c',' ','a','b','a',' ','b','b','b',' ','d','\0'};
    char* pmystr = mystr;
    int countWords = 0;
    int sizemassive = strlen(mystr);
    char* palindromQ = nullptr;
    char* palindromQEnd = nullptr;
    bool letterExist = false;
    int palindromcounter = 0;
    for (int i = 0; i < sizemassive; i++)
    {
        if (!letterExist && int(*(pmystr + i)) >= 65 && int(*(pmystr + i)) <= 90 || !letterExist && int(*(pmystr + i)) >= 97 && int(*(pmystr + i)) <= 122)
        {
            letterExist = true;
            palindromQ = (pmystr + i);
            palindromcounter++;
        }
        else if (int(*(pmystr + i)) >= 65 && int(*(pmystr + i)) <= 90 || int(*(pmystr + i)) >= 97 && int(*(pmystr + i)) <= 122)
        {
            palindromcounter++;
        }        
        else if (int(*(pmystr + i)) < 65 || int(*(pmystr + i)) > 90 && int(*(pmystr + i)) < 97 || int(*(pmystr + i)) > 122)
        {
            if (letterExist)
            { 
                strncpy_s(palindromQEnd, sizeof(char), palindromQ, palindromcounter);
                if (isPalindrom(palindromQEnd, palindromcounter) == "true")
                    countWords++;
                palindromcounter = 0;
            }
            letterExist = false;
        }

    }

    std::cout << countWords;
        
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
