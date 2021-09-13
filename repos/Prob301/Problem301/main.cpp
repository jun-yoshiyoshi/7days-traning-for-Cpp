#include "Product.h"

int main(int argc, char** argv) {
	Product p[3];

	p[0].setName("paper");
	p[0].setPrice(100);
	p[0].setTaxrate(0.10);

	p[1].setName("book");
	p[1].setPrice(500);
	p[1].setTaxrate(0.08);

	p[2].setName("newspaper");
	p[2].setPrice(120);
	p[2].setTaxrate(0.05);

	for (int i = 0; i < 3; ++i) {
		p[i].showInfo();
	}
	return 0;
}

