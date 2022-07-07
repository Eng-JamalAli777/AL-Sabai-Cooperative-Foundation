#include "persons.h"

void persons::SetName(string name)
{
	Name = name;
}

void persons::SetSSn_ID(int ssn)
{ 
	ssn_id = ssn;
}

string persons::GetName()
{
	return Name;
}

int persons::GetSSn_ID()
{
	return ssn_id;
}
