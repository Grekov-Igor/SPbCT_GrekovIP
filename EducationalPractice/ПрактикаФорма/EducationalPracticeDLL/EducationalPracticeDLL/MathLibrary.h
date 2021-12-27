// MathLibrary.h - Contains declarations of math functions
#pragma once
#include <vector>
#include <fstream>
#include <vector>
#include <iterator>

#ifdef EDUCATIONALPRACTICEDLL_EXPORTS
#define EDUCATIONALPRACTICEDLL_API __declspec(dllexport)
#else
#define EDUCATIONALPRACTICEDLL_API __declspec(dllimport)
#endif


extern "C" EDUCATIONALPRACTICEDLL_API void writeTo(const std::vector<char> & data);


