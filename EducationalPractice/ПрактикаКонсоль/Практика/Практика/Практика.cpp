#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <ctime>
#include <fstream>
#include <locale.h>
#include <Windows.h>
#include <string>
#include <stdio.h>
#include <locale.h>
#include "Header.h"


using namespace std;




int main()
{
    STARTUPINFO si = { sizeof(si) };
    PROCESS_INFORMATION pi;
    TCHAR p[] = TEXT("notepad.exe");
    CreateProcess(NULL, p, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi);

    STARTUPINFO si2 = { sizeof(si) };
    PROCESS_INFORMATION pi2;
    TCHAR p2[] = TEXT("notepad.exe");
    CreateProcess(NULL, p2, NULL, NULL, FALSE, 0, NULL, NULL, &si2, &pi2);
    
    setlocale(LC_ALL, "rus");
    MathFuncs::MyMathFuncs::Add();
    time_t seconds = time(NULL);
    tm* timeinfo = localtime(&seconds);
    cout <<endl<< "Текущие дата и время: " << asctime(timeinfo) << endl;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "rus");
    string path = "symbols.txt";
    fstream file;
    vector<char> str(10);

    string pathSort = "sort.txt";
    ofstream fileSort;

 

    file.open(path, fstream::in | fstream::out | fstream::app);
    fileSort.open(pathSort, std::ios::trunc);

    

    string s;
    int k = 0;
    cout << "100 русских букв из текстового файла: " << endl;



    while (getline(file, s)) {
        cout << s <<endl;
        cout << "Разбиение на строки по 10 букв и сортировка их по возрастанию:" << endl;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                str[j] = s[k];
                k++;
            }

            //сортировка пузырьком
            for (int l = 0; l < 10; l++)
            {
                for (int j = 0; j < 10 - 1; j++)
                {
                    if (str[j] > str[j + 1])
                    {
                        int b = str[j]; // создали дополнительную переменную
                        str[j] = str[j + 1]; // меняем местами
                        str[j + 1] = b; // значения элементов
                    }
                }
            }
            
            for (int j = 0; j < 10; j++) {
                fileSort << str[j] << " ";
                cout << str[j] << " ";

            }

            cout << endl;
            fileSort << endl;

        }
        
    }
    file.close();
    fileSort.close();
}

    


