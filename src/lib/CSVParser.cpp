//
// Created by Jack Duval on 2/24/25.
//

#include "CSVParser.h"

#include <sstream>
#include <iostream>

void CSVParser::load(const std::string& path, std::vector<TickEntry>& entries) const {
  std::ifstream f(path);
  std::string line;

  bool is_header = true;
  while (std::getline(f, line)) {
    if (is_header) {is_header = false; continue; }
    std::array<Variable, 50> row;
    Variable tmp;
    std::stringstream ss(line);
    size_t i = 0;
    while (ss >> tmp) {
      std::string tmps;
      row[i] = tmp;
      std::cout << "Read in: " << row[i];
      ++i;
      if (!getline(ss, tmps, ',')) {
        break;
      }
    }
    entries.emplace_back(row);
  }
}