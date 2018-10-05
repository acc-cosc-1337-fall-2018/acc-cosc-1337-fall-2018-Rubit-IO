#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "invoice.h"


TEST_CASE("Test to get extended cost")
{
	InvoiceDetail Detail(10, 10);
	REQUIRE(Detail.get_extended_cost() == 100);


}

TEST_CASE("Test invoice get total")
{
	Invoice invoice;

	invoice.add_invoice_detail(InvoiceDetail(10, 10));
	invoice.add_invoice_detail(InvoiceDetail(5, 5));
	invoice.add_invoice_detail(InvoiceDetail(100, 2));

	REQUIRE(invoice.get_total() == 325);
}

TEST_CASE("Test invoice opertor overloading") {

	Invoice invoice;

	invoice.add_invoice_detail(InvoiceDetail(10, 10));
	invoice.add_invoice_detail(InvoiceDetail(5, 5));
	invoice.add_invoice_detail(InvoiceDetail(100, 2));

	Invoice invoice1;
	invoice1.add_invoice_detail(InvoiceDetail(100, 2));

	Invoice result = invoice + invoice1;
	REQUIRE(result.get_total() == 525);
}