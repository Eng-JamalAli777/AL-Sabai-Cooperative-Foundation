#include<iostream>
#include<string>
using namespace std; 
class father
{ 
private:
	string name_project;
	string  project_type;
	float project_number;
public:
	void SetNameProject(string  name);
	void SetProjectType(string   type);
	void SetProjectNumber(float number);
	string  GetNameProject();
	string  GetProjectType();
	float GetProjectNumber();

};

