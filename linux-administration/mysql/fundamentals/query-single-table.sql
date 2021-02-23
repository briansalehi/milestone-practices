select invoice_number, invoice_date, invoice_total,
	payment_total, credit_total,
	invoice_total - payment_total - credit_total as balance_due
from invoices
where invoice_total - payment_total - credit_total > 0
order by invoice_date;