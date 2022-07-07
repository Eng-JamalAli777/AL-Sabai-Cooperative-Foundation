#include<iostream>
#pragma once
#include "persons.h"
class training_and_eduction :
	public persons
{  private:
	float fees;
public:
	void SetFees(float f);
	float GetFees();
};

