#include "Arm.h"
#include "../RobotMap.h"

Arm::Arm() : Subsystem("ExampleSubsystem") {

}

void Arm::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}

void Arm::armMove(double moveVal) {
	//arm->Set(ControlMode::PercentOutput, moveVal);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
