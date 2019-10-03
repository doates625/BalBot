/**
 * @file MotorL.h
 * @brief Left drive motor subsystem.
 * @author Dan Oates (WPI Class of 2020)
 */
#pragma once

namespace MotorL
{
	void init();
	void update();
	void set_voltage(float v_cmd);
	float get_angle();
	float get_velocity();
}