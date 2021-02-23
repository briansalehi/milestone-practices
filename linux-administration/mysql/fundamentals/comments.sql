/*
Author: Brian Salehi
Date: 02/23/2021
*/
select invoice_number, invoice_date, invoice_total,
	invoice_total - payment_total - credit_total as balance_due
from invoices;

-- The fourth column calculates balance due
select invoice_number, invoice_date, invoice_total,
	invoice_total - payment_total - credit_total as balance_due
from invoices;
