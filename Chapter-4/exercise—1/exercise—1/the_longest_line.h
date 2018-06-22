#pragma once
#ifndef _the_longest_line_h
#define _the_longest_line_h
#include <string>
#include <fstream>

void longest_line();

std::string line(std::ifstream&infile, std::string long_line);

#endif // !_the_longest_line_h

