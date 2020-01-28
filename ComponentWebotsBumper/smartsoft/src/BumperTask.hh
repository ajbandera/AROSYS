//--------------------------------------------------------------------------
// Code generated by the SmartSoft MDSD Toolchain
// The SmartSoft Toolchain has been developed by:
//
// Service Robotics Research Center
// University of Applied Sciences Ulm
// Prittwitzstr. 10
// 89075 Ulm (Germany)
//
// Information about the SmartSoft MDSD Toolchain is available at:
// www.servicerobotik-ulm.de
//
// This file is generated once. Modify this file to your needs.
// If you want the toolchain to re-generate this file, please
// delete it before running the code generator.
//--------------------------------------------------------------------------
#ifndef _BUMPERTASK_HH
#define _BUMPERTASK_HH

#include "BumperTaskCore.hh"

#include <webots/Robot.hpp>
#include <webots/TouchSensor.hpp>

class BumperTask : public BumperTaskCore {
private:
  int webotsTimeStep;
  webots::Robot *webotsRobot;
  webots::TouchSensor *webotsTouchSensor;

public:
  BumperTask(SmartACE::SmartComponent *comp);
  virtual ~BumperTask();

  virtual int on_entry();
  virtual int on_execute();
  virtual int on_exit();
};

#endif
