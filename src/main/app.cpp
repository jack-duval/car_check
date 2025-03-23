#include "app.h"

#include "src/lib/CSVParser.h"

App::App(bool debug_mode) : m_debug_mode(debug_mode), m_csv_parser(CSVParser::getInstance()) {
  m_is_running = false;
  m_log = nullptr;
  std::string test_path = "/Users/jack/Desktop/Development/car_check/data/datalog1.csv";
  m_log = std::make_unique<Log>(test_path, *m_csv_parser);
}

App::~App() { std::cout << "Exiting App."; }

bool App::get_is_running() { return m_is_running; }

void App::set_should_exit() { m_should_exit = true; }

void App::run() {
  // m_is_running = true;
  // m_should_exit = false;
  // m_debug_iter_counter = 0;
  //
  // while (m_is_running) {
  //   std::cout << "Still Running" << std::endl;
  //
  //   if (m_debug_mode) {
  //     std::cout << "Debug: after " << m_debug_iter_counter << " iterations."
  //               << std::endl;
  //     m_debug_iter_counter++;
  //   }
  //
  //   if (m_debug_iter_counter >= 10) {
  //     m_should_exit = true;
  //   }
  //
  //   if (m_should_exit) {
  //     m_is_running = false;
  //     handle_exit();
  //     std::cout << "Exiting this iteration" << std::endl;
  //   }
  // }

}

void App::handle_exit() { std::cout << "Handling exit safely..." << std::endl; }
