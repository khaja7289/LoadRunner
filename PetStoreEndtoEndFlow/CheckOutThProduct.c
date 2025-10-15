CheckOutThProduct()
{

	lr_start_transaction("ClickOnViewCart");
	web_reg_find("Text=Shopping Cart", 
		LAST);
	web_url("Cart.action_4", 
		"URL=https://petstore.octoperf.com/actions/Cart.action?viewCart=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Cart.action", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("ClickOnViewCart",LR_AUTO);
	
	lr_think_time(5);
	
	lr_start_transaction("ClickOnProccedToCheckOut");
	web_reg_find("Text=Payment Details", 
		LAST);

	web_link("Proceed to Checkout", 
		"Text=Proceed to Checkout", 
		"Snapshot=t21.inf", 
		LAST);
	lr_end_transaction("ClickOnProccedToCheckOut",LR_AUTO);
	
	lr_think_time(5);
	
	lr_start_transaction("ClickOnContinue");

	web_reg_find("Text=Confirm", 
		LAST);

	web_submit_form("Order.action", 
		"Snapshot=t22.inf", 
		ITEMDATA, 
		"Name=order.cardType", "Value=Visa", ENDITEM, 
		"Name=order.creditCard", "Value=999 9999 9999 9999", ENDITEM, 
		"Name=order.expiryDate", "Value=12/03", ENDITEM, 
		"Name=order.billToFirstName", "Value=ABC", ENDITEM, 
		"Name=order.billToLastName", "Value=XYX", ENDITEM, 
		"Name=order.billAddress1", "Value=901 San Antonio Road", ENDITEM, 
		"Name=order.billAddress2", "Value=MS UCUP02-206", ENDITEM, 
		"Name=order.billCity", "Value=Palo Alto", ENDITEM, 
		"Name=order.billState", "Value=CA", ENDITEM, 
		"Name=order.billZip", "Value=94303", ENDITEM, 
		"Name=order.billCountry", "Value=USA", ENDITEM, 
		"Name=shippingAddressRequired", "Value=<OFF>", ENDITEM, 
		"Name=newOrder", "Value=Continue", ENDITEM, 
		LAST);

	lr_end_transaction("ClickOnContinue",LR_AUTO);

	lr_think_time(5);
	
	lr_start_transaction("ClickOnConform");
	web_reg_find("Text=Thank you, your order has been submitted", 
		LAST);

	web_link("Confirm", 
		"Text=Confirm", 
		"Snapshot=t23.inf", 
		LAST);
	lr_end_transaction("ClickOnConform",LR_AUTO);

	return 0;
}
