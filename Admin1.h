#pragma once
#include<iostream>
#include<list>
#include "Product1.h"
#include<string>
#include<list>
using namespace std;

class Admin
{
public:
	void AddProductToFile(list<Product>& v1);
	void ViewProductFromFile(list<Product>& v1);
}; 