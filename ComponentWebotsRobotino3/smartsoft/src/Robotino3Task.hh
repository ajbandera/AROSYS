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
#ifndef _ROBOTINO3TASK_HH
#define _ROBOTINO3TASK_HH

#include "Robotino3TaskCore.hh"

#include <webots/GPS.hpp>
#include <webots/Node.hpp>
#include <webots/Motor.hpp>
#include <webots/Device.hpp>
#include <webots/InertialUnit.hpp>

#include "CommBasicObjects/CommBaseState.hh"

#define S_TO_MS 1000.0 // Conversion factor

// Robotino 3 specification
#define WHEEL_GAP    0.184  // in meter
#define WHEEL_RADIUS 0.0625 // in meter


class Robotino3Task  : public Robotino3TaskCore
{

private:
	int webotsTimeStep;
	bool GPSFound;
	bool IMUFound;
	double motorMaxSpeed; // in rad/s
	webots::GPS *webotsGPS;
	webots::Motor *webotsMotor0;
	webots::Motor *webotsMotor1;
	webots::Motor *webotsMotor2;
  webots::InertialUnit *webotsIMU;

public:
	Robotino3Task(SmartACE::SmartComponent *comp);
	virtual ~Robotino3Task();

	virtual int on_entry();
	virtual int on_execute();
	virtual int on_exit();
};

#endif
