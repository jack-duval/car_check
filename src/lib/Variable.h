//
// Created by Jack Duval on 3/22/25.
//

#pragma once

#include <sstream>
#include <variant>

// This class will represent a single value from a particular field in a TickEntry
class Variable {
public:
  explicit Variable(const std::variant<float, int, bool> data) : m_data(data) {}
  Variable() = default;
  ~Variable() = default;

  void operator=(float data) {
    m_data=data;
  }

  void operator=(int data) {
    m_data=data;
  }

  void operator=(bool data) {
    m_data=data;
  }

  friend void operator<<(std::ostream& os, Variable& var) {
    if (std::holds_alternative<float>(var.m_data)) {
      os << var.get<float>();
    } else if (std::holds_alternative<int>(var.m_data)) {
      os << var.get<int>();
    } else {
      os << var.get<bool>();
    }
  }

  friend std::istream& operator>>(std::stringstream& in, Variable &var) {
    if (std::string input; in >> input) {
      if (input.find('.') != std::string::npos) {
        var.m_data=std::stof(input);
      } else if (input.find("on") != std::string::npos) {
        var.m_data=true;
      } else if (input.find("off") != std::string::npos) {
        var.m_data=false;
      } else if (isdigit(input[0])) {
        var.m_data=std::stoi(input);
      }
    }
    return in;
  }

  template<typename T>
  T& get() { return std::get<T>(m_data); }

private:
  std::variant<float, int, bool> m_data;

};
