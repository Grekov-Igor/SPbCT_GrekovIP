// MathLibrary.cpp : Defines the exported functions for the DLL.
//#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include "MathLibrary.h"

#include <locale.h>
#include <fstream>
#include <Windows.h>

void writeTo(const std::vector<char>& data)
    {
    
    setlocale(LC_ALL, "ru");

    std::ofstream filestream("sorted.txt", std::ios::app);

    for (int j = 0; j < 10; j++) {
        filestream << data[j] << " ";
    }
    filestream << "\n";
    filestream.close();
    }


