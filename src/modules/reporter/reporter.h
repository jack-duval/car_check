//
// Created by Jack Duval on 3/1/25.
//

#pragma once

/**
 * Responsible for writing faults and events to the DB.
 * Singleton, as there only needs to be one.
 */
class reporter {
public:
  reporter();
  ~reporter();

  static reporter& get_instance();
  bool report_fault();

  // remove copy and move constructors and c/m assignment operators
  reporter(const reporter &other) = delete;
  reporter(reporter &&other) = delete;
  reporter &operator=(const reporter &other) = delete;
  reporter &operator=(reporter &&other) = delete;

private:
};
