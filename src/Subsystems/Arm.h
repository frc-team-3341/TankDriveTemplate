#ifndef Arm_H
#define Arm_H

#include <Commands/Subsystem.h>
#include "ctre/Phoenix.h"

class Arm : public frc::Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	TalonSRX* arm;

public:
	Arm();
	void InitDefaultCommand();
	void armMove(double moveVal);
};

#endif  // Arm_H
