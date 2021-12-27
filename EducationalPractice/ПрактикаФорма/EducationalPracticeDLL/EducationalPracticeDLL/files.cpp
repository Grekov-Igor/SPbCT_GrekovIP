#include "pch.h"
#include "files.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <stdexcept>



namespace FilesFunctions 
{
	void MyFilesFunctions::writeTo(const std::vector<char>& data)
	{
		std::ofstream filestream("sorted.txt", std::ios::app);
		copy(data.begin(), data.end(), std::ostream_iterator<char>(filestream, " "));
		filestream << "\n";
		filestream.close();
	}
}