/*
 * NetworkTablesInterface.cpp
 *
 *  Created on: Aug 30, 2018
 *      Author: danie
 */

#include "NetworkTablesInterface.h"


double NetworkTablesInterface::getNumberCV()
{
	//return nt::NetworkTableInstance::GetDefault().GetEntry("cv").GetString("100"); // -1 default

	return nt::NetworkTableInstance::GetDefault().GetTable("cv")->GetEntry("distance").GetDouble(-1);	//if -1 then cv value does not exist

}

double NetworkTablesInterface::check()
{
	return nt::NetworkTableInstance::GetDefault().GetEntry("distance").GetDouble(-1); // -1 default
}

double NetworkTablesInterface::help() {
	return NetworkTable::GetTable("cv")->GetNumber("distance", -1);
	//returns true if the gear has been detected
}
