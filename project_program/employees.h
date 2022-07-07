#pragma once
#include "persons.h"
class employees :
	public persons
{ 
private:
	float salary;
public:
	void SetSalary(float  sal);
	float GetSalary();
};

