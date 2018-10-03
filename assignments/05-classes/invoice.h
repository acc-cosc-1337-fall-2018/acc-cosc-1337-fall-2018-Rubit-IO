#include "invoice_detail.h"
#ifndef INVOICE_H
#define INVOICE_H
#include<vector>

class Invoice
{
public:
	void add_invoice_detail(InvoiceDetail detail);
	double get_total() const;


private:
	std::vector<InvoiceDetail> invoice_details;
	vector<invoiceDetail> invoice_details;




};

#endif // INVOICE_H