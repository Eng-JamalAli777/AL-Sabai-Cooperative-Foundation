#include<string>
#include<iostream>
using namespace std;
#pragma once
class persons
{   private:
	string Name;
	int ssn_id;
public:
	void SetName(string name);
	void SetSSn_ID(int ssn);
	string GetName();
	int GetSSn_ID();

};

