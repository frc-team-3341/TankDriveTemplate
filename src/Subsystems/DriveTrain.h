#ifndef DriveTrain_H
#define DriveTrain_H

#include <Commands/Subsystem.h>
#include "WPILib.h"
#include "ctre/Phoenix.h"
#include "math.h"

class DriveTrain : public frc::Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities

	TalonSRX* left;
	TalonSRX* right;
	//TalonSRX* arm;

public:
	DriveTrain();
	void InitDefaultCommand();
	void tankDrive(double leftVal, double rightVal);
	//void armMove(double moveVal);
	//double startAbsTicks;
	//void setStartAbsTicks();

};

#endif  // DriveTrain_H
