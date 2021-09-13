#include "Product.h"


void Product::setName(string name) {
	m_name = name;
}
string Product::getName() {
	return 	m_name;
}

void Product::setPrice(int price) {
	m_price = price;
}
int Product::getPrice() {
	return m_price;
}

void Product::setTaxrate(double rate) {
	m_tax_rate = rate;
}
double Product::getTaxrate() {
	return m_tax_rate;
}

void Product::showInfo() {
	int price_tax = m_price + (int)(m_price * m_tax_rate);
	cout << "product name:" << m_name << " price:" << m_price << " total price:" << price_tax << endl;
}
