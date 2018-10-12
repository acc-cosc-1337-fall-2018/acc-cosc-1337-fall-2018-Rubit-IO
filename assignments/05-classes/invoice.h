#include "invoice_detail.h"
#ifndef INVOICE_H
#define INVOICE_H
#include<vector>

using std::vector;

class Invoice
{
public:
	invoice() = default
	Invoice(double a) : total(a) {}
	void add_invoice_detail(InvoiceDetail detail);
	virtual double get_total() const;
	friend Invoice operator+(const Invoice& i, const Invoice& i2);
	invoice operator+=(const Invoice& i2);

private:
	std::vector<InvoiceDetail> invoice_details;
	double total{ 0 };





};

#endif // INVOICE_H