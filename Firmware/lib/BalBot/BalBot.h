/**
 * @file BalBot.h
 * @brief Contains all BalBot constants.
 */
#pragma once
#include <Arduino.h>

// Robot Physical Constants
const float Ix = 0.00238f;	// Pitch inertia [kg*m^2]
const float Iz = 0.00150f;	// Yaw inertia [kg*m^2]
const float m = 0.95f;		// Robot mass [kg]
const float g = 9.81;		// Gravity [m/s^2]
const float dG = 0.028;		// CG distance [m]
const float dB = 0.171;		// Wheel base [m]
const float Rw = 0.0336;	// Wheel radius [m]
const float Rm = 12.0f;		// Motor resistance [Ohm]
const float Kv = 0.30f;		// Motor back-EMF [V/(rad/s)]
const float Kt = 0.44f;		// Motor torque [N*m/A]
const float Vb = 12.0f;		// Battery voltage [V]

// Controller Constants
const float f_ctrl = 100.0f;	// Control frequency [Hz]
const float yaw_kp = -0.120f;	// Yaw P-gain [V/(rad/s)]
const float yaw_ki = 25.7f;		// Yaw I-gain [V/rad]
const float yaw_kd = 0.0f;		// Yaw D-gain [V/(rad/s^2)]
const float ss_K1 = -1.27f;		// SS K1 [V/(rad/s)]
const float ss_K2 = -13.3f;		// SS K2 [V/rad]
const float ss_K3 = -12.9f;		// SS K3 [V/(m/s)]

// Derived Constants
const float Kv_div_Rw = Kv / Rw;	// Velocity back-EMF [V/(m/s)]
const float t_ctrl = 1.0f / f_ctrl;	// Control period [s]
const float dB_inv = 1.0f / dB;		// Wheel base inverse [1/m]
const float Rw_div_2 = Rw / 2.0f;	// Half wheel radius [m]

// Encoder Resolution [cnt/rev]
const float encoder_cpr = 1320.0f;

// Serial Baud Rate [bit/s]
const uint32_t serial_baud = 57600;