#pragma once
#include "father.h"
class sales :
	public father
{  private:
	float selling_price;
public:
	void SetSellingPrice(float price);
	float GetSellingPrice();
};

