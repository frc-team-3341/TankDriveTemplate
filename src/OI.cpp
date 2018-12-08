/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"
#include "Commands/ArmMove.h"

OI::OI() : left(new Joystick(0)), right(new Joystick(1)), arm(new Joystick(2)) {
	// Process operator interface input here.
	//armUp->WhenPressed(new ArmMove(0.2));
	//armDown->WhenPressed(new ArmMove(-0.2));
	//armUp->WhenReleased(new ArmMove(0));
	//armDown->WhenReleased(new ArmMove(0));
}

frc::Joystick* OI::getLeftStick() {
	return left;
}

frc::Joystick* OI::getRightStick() {
	return right;
}

frc::Joystick* OI::getArmStick() {
	return arm;
}
