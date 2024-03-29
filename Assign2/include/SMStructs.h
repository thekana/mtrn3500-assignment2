#pragma once

struct Remote
{
	double ControlSpeed;
	double ControlSteering;
	unsigned char performShutdown;
};

struct GPS_sm
{
	double Easting;
	double Northing;
	double Height;
};

struct ModuleFlags {
	unsigned char PM : 1,
		GPS : 1,
		Laser : 1,
		Xbox : 1,
		Vehicle : 1,
		Unused : 3;
};

union ExecFlags
{
	unsigned char Status;
	ModuleFlags Flags;
};

struct PM
{
	ExecFlags Heartbeats;
	ExecFlags PMHeartbeats;
	ExecFlags Shutdown;
	double TimeStamps[5];
};

struct Vehicle_1
{
	double ActualSpeed;
	double ActualSteering;
};

struct Laser
{
	double XRange[600];
	double YRange[600];
	int NumPoints;
};
