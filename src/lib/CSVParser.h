//
// Created by Jack Duval on 2/24/25.
//
#pragma once

#include "TickEntry.h"

#include <fstream>
#include <sstream>
#include <iostream>

class CSVParser {
public:
  CSVParser(const CSVParser&) = delete;
  CSVParser& operator=(const CSVParser&) = delete;

  static CSVParser* getInstance() {
    if (!m_instance) {
      m_instance = new CSVParser();
    }
    return m_instance;
  }

  void load(const std::string& path, std::vector<TickEntry>& entries) const;



private:
  CSVParser() { m_instance = nullptr; }
  ~CSVParser() = default;
  static CSVParser* m_instance;
};
