#include "ArmMove.h"

ArmMove::ArmMove(double moveVal) {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Robot::arm);
	move = moveVal;
}

// Called just before this Command runs the first time
void ArmMove::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void ArmMove::Execute() {
	Robot::arm->armMove(move);
}

// Make this return true when this Command no longer needs to run execute()
bool ArmMove::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ArmMove::End() {
	//Robot::drive->armMove(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ArmMove::Interrupted() {

}
