select vendor_name, invoice_number, invoice_date, invoice_total
form vendors
inner join invoices
	on vendors.vendor_id = invoices.vendor_id
where invoice_total >= 500
order by vendor_name, invoice_total desc;
