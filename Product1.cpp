#pragma once
#include "Product1.h"
#include<string>
#include<list>
#include<iostream>
using namespace std;


void Product::setProdNo(int n)
{
	ProdNo = n;
}

void Product::setProdPrice(double p)
{
	ProdPrice = p;
}

void Product::setProdTax(double p)
{
	ProdTax = p;
}

void Product::setProdDiscount(double p)
{
	ProdDiscount = p;
}

void Product::setProdQuantity(int n)
{
	ProdQuantity = n;
}

int Product::getProdNo()
{
	return ProdNo;
}

int Product::getProdQuantity()
{
	return ProdQuantity;
}

double Product::getProdDiscount()
{
	return ProdDiscount;
}

double Product::getProdTax()
{
	return ProdTax;
} 

double Product::getProdPrice()
{
	return ProdPrice;
}