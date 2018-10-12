#include<iostream>
#include "invoice_progress.h"
#include "invoice_utility.h"


/*class Shape
{
public:
	virtual void draw() { std::cout << "Shape\n"; }
};

class Line : public Shape
{
public:
	void draw() { std::cout << "Line\n"; }
};

class Circle : public Shape
{
public:
	void draw() { std::cout << "Circle\n"; }

};

int main()
{
	std::vector<std::reference_wrapper<Shape>> shapes;
	Line line;
	Circle c;
	shapes.push_back(line);
	shapes.push_back(c);

	line.draw();
	Shape& shape = line;
	shape.draw();
	Circle c;
	c.draw();
	Shape& shape_c = c;
	shape_c.draw()*/


	/*for (auto w_r_shape : shapes)
	{
		w_r_shape.get().draw();
	}
	return 0;
}*/

int main()
{
	/*InvoiceDetail detail;
	std::cin >> detail;

	InvoiceUtility inv(25);
	inv.add_invoice_detail(InvoiceDetail(100, 1));
	
	std::cout << inv.get_total();
	
	
	
	Invoice invoice;

	InvoiceDetail detail;
	std::cin >> detail;

	invoice.add_invoice_detail(detail);
	invoice.add_invoice_detail(InvoiceDetail(5, 5));
	invoice.add_invoice_detail(InvoiceDetail(100, 2));

	Invoice invoice1;
	invoice1.add_invoice_detail(InvoiceDetail(100, 2));

	Invoice result = invoice + invoice1;
	std::cout << result.get_total();
	return 0;*/
	
	InvoiceUtility invu(25);
	invu.add_invoice_detail(InvoiceDetail(100, 1));

	InvoiceProgress invp(250);
	invp.add_invoice_detail(InvoiceDetail(100, 1));

	std::cout<<invu.get_total()<< std::endl;
	
	std::cout<<invp.get_total()<< std::endl; 

	Invoice& u = invu;
	Invoice& p = invp;

	std::cout<<u.get_total()<< std::endl;
	std::cout<<p.get_total()<< std::endl;
	return 0;
}
