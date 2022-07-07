#include "father.h"

void father::SetNameProject(string name)
{
	name_project = name;
}

void father::SetProjectType(string type)
{
	project_type = type;
}

void father::SetProjectNumber(float number)
{
	project_number = number;
}

string father::GetNameProject()
{
	return name_project;
}

string father::GetProjectType()
{
	return project_type;
}

float father::GetProjectNumber()
{
	return project_number;
}
