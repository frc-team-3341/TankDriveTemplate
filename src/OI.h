/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <WPILib.h>
#include "Joystick.h"


class OI {

private:
	frc::Joystick* left;
	frc::Joystick* right;
	frc::Joystick* arm;

	//frc::Button* armUp;
	//frc::Button* armDown;

public:
	OI();
	frc::Joystick* getLeftStick();
	frc::Joystick* getRightStick();
	frc::Joystick* getArmStick();


};
