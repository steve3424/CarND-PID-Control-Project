#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {
	p_error = 0.0;
	i_error = 0.0;
	d_error = 0.0;
}


PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
	this->Kp = Kp;
	this->Ki = Ki;
	this->Kd = Kd;
}

void PID::UpdateError(double cte) {
	// check if first update
	if (p_error == 0.0) {
		p_error = cte;
		i_error += cte;
	}
	else {
		d_error = cte - p_error;
		p_error = cte;
		i_error += cte;
	}
}

double PID::TotalError() {
}

