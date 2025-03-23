//
// Created by Jack Duval on 3/22/25.
//

#include "Log.h"

Log::Log(const std::string& csv_path, const CSVParser& csv_parser) {
  m_csv_path = csv_path;
  csv_parser.getInstance();
  csv_parser.load(csv_path, m_dt_entries);
}