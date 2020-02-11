#pragma once
#include<iostream>
#include<fstream>
#include "Product1.h"
#include "Admin1.h"
#include<string>
#include<list>
using namespace std;

void Admin::AddProductToFile(list<Product>& ProdList)
{
	int id, qty;
	double price;


	//
	ofstream fout;
	fout.open("Product_list.dat", ios::out|ios::app);
	if (fout.is_open())
	{
		Product p;
		cout << "\nEnter the product id:";
		cin >> id;
		cout << "\nEnter the product qty:";
		cin >> qty;
		cout << "\nEnter the product price:";
		cin >> price;

		p.setProdNo(id);
		p.setProdQuantity(qty);
		p.setProdPrice(price);
		ProdList.push_back(p);

		fout.write((char *)&p, sizeof(Product));
		fout.close();

	}
	else
	{
		cout << "\nUnable To Open File";
	}
}
void Admin::ViewProductFromFile(list<Product>& ProdList)
{

	ifstream fin;
	fin.open("Product_list.dat",ios::in);

	if (fin.is_open())
	{
		

		while (!fin.eof())
		{
			Product *p;
			p = new Product();

			fin.read((char *)p, sizeof(Product));
			cout << "\n\nProduct ID :" << p->getProdNo();
			cout << "\nProduct Qty :" <<p->getProdQuantity();
			cout << "\nProduct Price :" << p->getProdPrice();
		}

		fin.close();
	}
	else
	{ 
		cout << "\nFile cannot be Read ";
	}

}