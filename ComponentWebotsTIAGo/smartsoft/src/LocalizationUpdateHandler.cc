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
#include "LocalizationUpdateHandler.hh"

#include <iostream>

LocalizationUpdateHandler::LocalizationUpdateHandler(Smart::InputSubject<CommBasicObjects::CommBasePositionUpdate> *subject, const int &prescaleFactor)
:	LocalizationUpdateHandlerCore(subject, prescaleFactor)
{
	std::cout << "constructor LocalizationUpdateHandler\n";
}
LocalizationUpdateHandler::~LocalizationUpdateHandler() 
{
	std::cout << "destructor LocalizationUpdateHandler\n";
}

void LocalizationUpdateHandler::on_LocalizationUpdateServiceIn(const CommBasicObjects::CommBasePositionUpdate &input)
{
	// implement business logic here
	// (do not use blocking calls here, otherwise this might block the InputPort LocalizationUpdateServiceIn)
}
