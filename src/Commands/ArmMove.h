#ifndef ArmMove_H
#define ArmMove_H

#include "../Robot.h"

class ArmMove : public Command {
public:
	double move;
	ArmMove(double moveVal);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // ArmMove_H
