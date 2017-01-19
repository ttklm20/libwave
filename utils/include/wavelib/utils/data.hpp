#ifndef __wavelib_UTILS_DATA_HPP__
#define __wavelib_UTILS_DATA_HPP__

#include <fstream>
#include <iostream>

#include "wavelib/utils/math.hpp"


namespace wavelib {

// ERROR MESSAGES
#define E_CSV_DATA_LOAD "Error! failed to load test data [%s]!!\n"
#define E_CSV_DATA_OPEN "Error! failed to open file for output [%s]!!\n"

// FUNCTIONS
int csvrows(std::string file_path);
int csvcols(std::string file_path);
int csv2mat(std::string file_path, bool header, MatX &data);
int mat2csv(std::string file_path, MatX data);

}  // end of wavelib namespace
#endif