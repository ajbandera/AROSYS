// Copyright 1996-2020 Cyberbotics Ltd.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "ComponentWebotsTIAGo.hh"

#include "NavigationVelocityHandler.hh"

#include <iostream>

NavigationVelocityHandler::NavigationVelocityHandler(Smart::InputSubject<CommBasicObjects::CommNavigationVelocity> *subject,
                                                     const int &prescaleFactor) :
  NavigationVelocityHandlerCore(subject, prescaleFactor)
{
  std::cout << "constructor NavigationVelocityHandler\n";
}
NavigationVelocityHandler::~NavigationVelocityHandler()
{
  std::cout << "destructor NavigationVelocityHandler\n";
}

void NavigationVelocityHandler::on_NavigationVelocityServiceIn(const CommBasicObjects::CommNavigationVelocity &input)
{
  // implement business logic here
  // (do not use blocking calls here, otherwise this might block the InputPort NavigationVelocityServiceIn)

  // get from the port and pass to ComponentWebotsTIAGoCore to be accessible
  COMP->TIAGoMutex.acquire();
  COMP->vX = input.get_vX(1.0);  // in m/s
  COMP->vY = input.get_vY(1.0);  // in m/s
  COMP->vW = input.get_omega();  // in rad/s
  COMP->TIAGoMutex.release();

  // print data to debug
  // std::cout << "Velocity - input = " << input      << std::endl;
  // std::cout << " => vX = "    << input.get_vX(1.0) << std::endl;
  // std::cout << " => vY = "    << input.get_vY(1.0) << std::endl;
  // std::cout << " => omega = " << input.getOmega()  << std::endl;
}
