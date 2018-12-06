#include "DriveTrain.h"
#include "../RobotMap.h"
#include "../Commands/TankDrive.h"
#include "iostream"
using namespace std;

DriveTrain::DriveTrain() : Subsystem("DriveTrain"),
<<<<<<< HEAD
left(new TalonSRX(LEFTMOTOR)), right(new TalonSRX(RIGHTMOTOR)) //, arm(new TalonSRX(2))
{
	//right->SetInverted(false);
	left->SetInverted(true);
	//left->ConfigSelectedFeedbackSensor(FeedbackDevice::CTRE_MagEncoder_Relative, 0, 10);
	//right->ConfigSelectedFeedbackSensor(FeedbackDevice::CTRE_MagEncoder_Relative, 0, 10);
	//left->Config_kP(0, 1, 10);
	//right->Config_kP(0, 1, 10);
=======
left(new TalonSRX(LEFTMOTOR)), right(new TalonSRX(RIGHTMOTOR))/*, arm(new TalonSRX(2))*/ {
	right->SetInverted(true);
>>>>>>> 5e50dd2e3867aeac278e34df633dd0cf27a5cf91
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
/*
void DriveTrain::armMove(double moveVal) {
	arm->Set(ControlMode::PercentOutput, moveVal);
}
*/

