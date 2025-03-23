//
// Created by Jack Duval on 3/22/25.
//

#pragma once

#include <vector>
#include <string>

#include "CSVParser.h"
#include "TickEntry.h"

class Log {
public:
  explicit Log(const std::string& csv_path, const CSVParser& csv_parser);

private:
  std::string m_csv_path;
  std::vector<TickEntry> m_dt_entries;


};
