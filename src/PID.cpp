#include "PID.h"

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
	
	this->Kp = Kp;
	this->Ki = Ki;
	this->Kd = Kd;
	
	total_cte = 0;
	previous_cte = 0;
}

void PID::UpdateError(double cte) {
	total_cte = total_cte + cte;
	p_error = -Kp * cte;
	i_error = -Ki * total_cte;
	d_error = -Kd * (cte = previous_cte);
	previous_cte = cte;
}

double PID::TotalError() {
	return p_error + i_error + d_error;
}

