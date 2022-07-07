#pragma once
#include "father.h"
class purchasing :
	public father
{ 
private:
	float  purch_price;
public:
	void  SetpurchasePrice(float price);
	float GetPurchasePrice();

};

