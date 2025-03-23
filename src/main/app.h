#include "src/lib/CSVParser.h"
#include "src/lib/Log.h"

#include <iostream>

class App {
public:
  App(bool debug_mode = false);
  ~App();

  void run();
  void handle_exit();

  bool get_is_running();
  void set_should_exit();

private:

  bool m_is_running;
  bool m_should_exit;
  bool m_debug_mode;
  size_t m_debug_iter_counter;
  CSVParser* m_csv_parser;
  std::unique_ptr<Log> m_log;
};
