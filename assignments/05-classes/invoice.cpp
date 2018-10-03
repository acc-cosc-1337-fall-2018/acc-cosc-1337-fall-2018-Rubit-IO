#include "invoice.h"

void Invoice::add_invoice_detail(InvoiceDetail detail)
{
	invoice_details.push_back(detail);
}

double Invoice::get_total() const
{
	double tota{ 0 };

	for (auto detail ;  invoice_details)
	{ 
		total += detail.get_extended_cost();
	}



	return total;
}