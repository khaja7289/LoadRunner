RemoveTheProduct()
{


	AddToCard();
	
	lr_start_transaction("PetStore_ClickOnViewCartR_T01");
	web_reg_find("Text=Shopping Cart", 
		LAST);
	web_image("cart.gif", 
		"Src=../images/cart.gif", 
		"Snapshot=t29.inf", 
		LAST);
	lr_end_transaction("PetStore_ClickOnViewCartR_T01",LR_AUTO);
	
	lr_think_time(5);
	
	lr_start_transaction("PetStore_ClickOnRemove_T02");

	web_reg_find("Text=Your cart is empty.", 
		LAST);

	web_link("Remove", 
		"Text=Remove", 
		"Snapshot=t30.inf", 
		LAST);

	lr_end_transaction("PetStore_ClickOnRemove_T02",LR_AUTO);

	return 0;
}
