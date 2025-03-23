//
// Created by Jack Duval on 3/22/25.
//

#pragma once

#include "Variable.h"

#include <array>

enum class Index {
  kTime = 0,
  kACCompressorOn = 1,
  kAFCorrection1 = 2,
  kAFCorrection3 = 3,
  kAFLearning1 = 4,
  kAFLearning3 = 5,
  kAFSensRatio = 6,
  kAVCSExhLeft = 7,
  kAVCSInLeft = 8,
  kAccelPos = 9,
  kBaroPressure = 10,
  kBatteryVolts = 11,
  kBoost = 12,
  kBoostExtended = 13,
  kCLFuelTarget = 14,
  kCalculatedLoad = 15,
  kCalculatedLoadEct = 16,
  kCommFuelFinal = 17,
  kCoolantTemp = 18,
  kDAM = 19,
  kEGRCommanded = 20,
  kFBK = 21,
  kFKL = 22,
  kFuelCut = 23,
  kFuelPressure = 24,
  kFuelPressureTarget = 25,
  kGearPosition = 26,
  kIgnitionComp = 27,
  kIgnitionTiming = 28,
  kInjectionTiming = 29,
  kIgnitionDutyCycle = 30,
  kInjectionPW = 31,
  kIgnitionTimingHSOI = 32,
  kIntakeTemp = 33,
  kIntakeTempManifold = 34,
  kMAFCorrectionFinal = 35,
  kMAFVolts = 36,
  kManifoldAbsolutePressure = 37,
  kOilTemp = 38,
  kRPM = 39,
  kReqTorque = 40,
  kTDBoostError = 41,
  kTDIntegral = 42,
  kTDProportional = 43,
  kTGBMapRatio = 44,
  kTargetBoostFinalRelExt = 45,
  kThrottlePos = 46,
  kVehicleSpeed = 47,
  kWastegateDuty = 48,
  kAPInfo = 49,
};

// This class will represent a single row of the csv logs from the Accessport
class TickEntry {
public:
  explicit TickEntry(const std::array<Variable, 50> &row_data) : m_data(row_data) {
    m_time = m_data[static_cast<size_t>(Index::kTime)].get<float>();
  }

  Variable operator[](const size_t i) const {
    return get(i);
  }

  // Can "get" values from a Tick entry by index or Index
  Variable get(const size_t index) const {
    return m_data[index];
  }

  Variable get(const Index index) const {
    return m_data[static_cast<size_t>(index)];
  }

  float get_time() const {
    return m_time;
  }

private:
  std::array<Variable, 50> m_data;
  float m_time;
};

