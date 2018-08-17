#include "DriveTrain.h"
#include "../RobotMap.h"
#include "../Commands/TankDrive.h"
#include "iostream"
using namespace std;

DriveTrain::DriveTrain() : Subsystem("DriveTrain"),
left(new TalonSRX(LEFTMOTOR)), right(new TalonSRX(RIGHTMOTOR)) //, arm(new TalonSRX(2))
{
	right->SetInverted(true);
}

void DriveTrain::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());

	SetDefaultCommand(new TankDrive());
}

void DriveTrain::tankDrive(double leftVal, double rightVal) {
	left->Set(ControlMode::PercentOutput, leftVal);
	right->Set(ControlMode::PercentOutput, rightVal);
	//arm->Set(ControlMode::PercentOutput, leftVal);
	//std::cout << leftVal << std::endl;
}


