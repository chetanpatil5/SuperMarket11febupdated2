#pragma once
#pragma once
#include<iostream>
using namespace std;

class Product
{
	int ProdNo;
	double ProdPrice;
	int ProdQuantity;
	double ProdDiscount;
	double ProdTax;

public:
	void setProdNo(int);
	void setProdPrice(double);
	void setProdQuantity(int);
	void setProdDiscount(double);
	void setProdTax(double);

	int getProdNo();
	double getProdPrice();
	int getProdQuantity();
	double getProdDiscount();
	double getProdTax();
	 

};

