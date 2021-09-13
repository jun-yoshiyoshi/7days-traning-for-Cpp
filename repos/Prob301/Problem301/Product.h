#ifndef	_PRODUCT_H_
#define _PRODUCT_H_
#include <iostream>
using namespace std;

class Product
{private:
	string m_name;
	int m_price;
	double m_tax_rate;
public:	
	void setName(string name);
	string getName();
	
	void setPrice(int price);
	int getPrice();
	
	void setTaxrate(double rate);
	double getTaxrate();

	void showInfo();
};
#endif

