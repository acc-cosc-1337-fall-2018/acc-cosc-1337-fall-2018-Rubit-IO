#include<iostream>
#include "invoice_detail.h"

using std::cout;

int main()
{
	
	InvoiceDetail Detail(10, 10);

	std::cout << Detail.get_extended_cost();
	return 0;



}
