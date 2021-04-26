create table invoices
(
	invoice_id int primary key auto_increment,
	vendor_id int int not null,
	invoice_number varchar(50) not null,
	invoice_date date not null,
	invoice_total decimal(9,2) not null,
	payment_total decimal(9,2) default 0,
	credit_total decimal(9,2) default 0,
	terms_id int not null,
	invoice_due_date date not null,
	payment_date date,
	constraint invoices_fk_vendors
		foreign key (vendor_id)
		references vendors (vendor_id),
	constraint invoices_fk_terms
		foreign key (terms_id)
		references terms (terms_id)
);
