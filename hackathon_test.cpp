#include <iostream>
#include <chrono>
#include <thread>
#include<windows.h>

using namespace std;

int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    setlocale(LC_CTYPE, "Polish");
    int choice;
    int counter = 0;

    do {
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
        cout << "Wybierz opcje aby zdac ten semstr :D" << endl;
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
        cout << "1. EGZAMIN JIPP 2023 - TYLKO U NAS" << endl;
        cout << "2. KOLOKWIA ALGEBRA Z GEOMETRI!" << endl;
        cout << "3. DYSK 1 ROK" << endl;
        cout << "4. EGZAMIN AiSD" << endl;
        cout << "5. WEJSCIOWKI JIPP2" << endl;
        cout << "6. GOTOWCE PYTHON" << endl;
        cout << "7. WSZYSTKIE GOTOWCE - OKAZJA" << endl;
        cout << "8. KOLOKWIA NA WYCIAGNIECIE REKI" << endl;
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
        cout << "Wybierz opcje aby zdac ten semstr :D" << endl;
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
        cin >> choice;

        switch (choice)
        {
        case 1:
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
            cout << "\nERROR 404" << endl;
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
            ++counter;
            if (counter < 9)
            {
                this_thread::sleep_for(chrono::seconds(2));
                system("cls"); // Czyszczenie ekranu
            }
            else 
            {
                counter = 0;
            }
            break;
        case 2:
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
            cout << "\nDO NAUKI!" << endl;
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
            ++counter;
            if (counter < 9) 
            {
                this_thread::sleep_for(chrono::seconds(2));
                system("cls"); // Czyszczenie ekranu
            }
            else 
            {
                counter = 0;
            }
            break;
        case 3:
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
            cout << "\nNIE MA TAK LATWO." << endl;
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
            ++counter;
            if (counter < 9)
            {
                this_thread::sleep_for(chrono::seconds(2));
                system("cls"); // Czyszczenie ekranu
            }
            else
            {
                counter = 0;
            }
            break;
        case 4:
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
            cout << "\nTY LENIU!!!" << endl;
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
            ++counter;
            if (counter < 9)
            {
                this_thread::sleep_for(chrono::seconds(2));
                system("cls"); // Czyszczenie ekranu
            }
            else 
            {
                counter = 0;
            }
            break;
        case 5:
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
            cout << "\nWIELKI DZIEKAN WSZYSTKO WIDZI!" << endl;
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
            ++counter;
            if (counter < 9)
            {
                this_thread::sleep_for(chrono::seconds(2));
                system("cls"); // Czyszczenie ekranu
            }
            else
            {
                counter = 0;
            }
            break;
        case 6:
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
            cout << "\nNIE NO CHYBA SOBIE ZARTUJESZ" << endl;
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
            ++counter;
            if (counter < 9)
            {
                this_thread::sleep_for(chrono::seconds(2));
                system("cls"); // Czyszczenie ekranu
            }
            else
            {
                counter = 0;
            }
            break;
        case 7:
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
            cout << "\nMIEJSCE W PIEKLE JUZ CZEKA" << endl;
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
            ++counter;
            if (counter < 9)
            {
                this_thread::sleep_for(chrono::seconds(2));
                system("cls"); // Czyszczenie ekranu
            }
            else
            {
                counter = 0;
            }
            break;
        case 8:
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
            cout << "\nSERIO?!? ZNOWU!? PRZESADA" << endl;
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
            ++counter;
            if (counter < 9)
            {
                this_thread::sleep_for(chrono::seconds(2));
                system("cls"); // Czyszczenie ekranu
            }
            else
            {
                counter = 0;
            }
            break;
        }
    } while (choice != 1000);

    return 0;
}