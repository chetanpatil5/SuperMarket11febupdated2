#pragma once
#pragma once
#include "Product1.h"
#include<fstream>
#include<string>
#include<list>
#include<iostream>
using namespace std;

class Customer
{
	int cust_id;
	string cust_name;

public:
	list<Product> ProdList;
	list<Product>& DisplayProductList(list<Product>& GProdList);
	list<Product>& AddToCart(list<Product>& GProdList);
	void setCustId(int);
	void setCustName(string);
	int getCustId();
	string getCustName();
	void UpdateProductList(list<Product>& GProdList);
};

