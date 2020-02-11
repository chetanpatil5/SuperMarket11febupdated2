#pragma once
#include "Product1.h"
#include<list>
#include "Customer1.h"
#include "Admin1.h"
#include<string>
#include<list>
#include<iostream>
using namespace std;

int main()
{
	list<Product> lp;
	Admin a;
	a.AddProductToFile(lp);
	a.AddProductToFile(lp);
	a.ViewProductFromFile(lp);
	
	//list<Product>::iterator itr=lp.begin() ;
	//while (itr != lp.end())
	//{
	//	cout<<endl<<itr->getProdNo()<<" ";
	//	cout << itr->getProdPrice() << " ";
	//	cout << itr->getProdQuantity() << " ";
	//	itr++;
	//}

	Customer c;
	lp=c.AddToCart(lp);
	cout << "\n\n\nGlobal list updated\n\n\n";
	lp=c.DisplayProductList(lp);
	a.ViewProductFromFile(lp);
	
	lp=c.AddToCart(lp);
	cout << "\n\n\nGlobal list updated\n\n\n";
	lp=c.DisplayProductList(lp);
	a.ViewProductFromFile(lp);
	
	//c.UpdateProductList(lp);
	//cout << "\n\n\nGlobal list updated\n\n\n";
	//a.ViewProductFromFile(lp);
	//c.DisplayProductList(lp);
	system("pause"); 
	return 0;
}