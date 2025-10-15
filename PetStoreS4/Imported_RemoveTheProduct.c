Imported_RemoveTheProduct()
{

	lr_start_transaction("ClickOnViewCartR");
	web_reg_find("Text=Shopping Cart", 
		LAST);
	web_image("cart.gif", 
		"Src=../images/cart.gif", 
		"Snapshot=t29.inf", 
		LAST);
	lr_end_transaction("ClickOnViewCartR",LR_AUTO);
	
	lr_think_time(5);
	
	lr_start_transaction("ClickOnRemove");

	web_reg_find("Text=Your cart is empty.",
		LAST);

	web_link("Remove", 
		"Text=Remove", 
		"Snapshot=t30.inf", 
		LAST);

	lr_end_transaction("ClickOnRemove",LR_AUTO);

	return 0;
}
