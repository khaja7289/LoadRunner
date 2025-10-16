UpdateCart()
{
	int qty;
	lr_start_transaction("PetStore_ClickOnViewcart_T01");

	web_reg_find("Text=Sub Total:", 
		LAST);

	web_url("Cart.action", 
		"URL=https://petstore.octoperf.com/actions/Cart.action?viewCart=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId=EST-9", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);


	lr_end_transaction("PetStore_ClickOnViewcart_T01",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("PetStore_UpdateCart_T02");
	
	// Generate random between 1 and 10
	qty = (rand() % 10) + 1;
	// Save to a parameter
	lr_param_sprintf("RandQty", "%d", qty);
	
	lr_output_message("Random Quantity selected = %s", lr_eval_string("{RandQty}"));

	web_submit_form("Cart.action_2", 
		"Snapshot=t18.inf", 
		ITEMDATA, 
		"Name={RanditemId}", "Value=1", ENDITEM, 
		"Name=updateCartQuantities", "Value=Update Cart", ENDITEM, 
		LAST);

		web_reg_find("Text={RandQty}", 
		LAST);
	web_submit_form("Cart.action_3", 
		"Snapshot=t19.inf", 
		ITEMDATA, 
		"Name={RanditemId}", "Value={RandQty}", ENDITEM, 
		"Name=updateCartQuantities", "Value=Update Cart", ENDITEM, 
		LAST);

	lr_end_transaction("PetStore_UpdateCart_T02",LR_AUTO);

	return 0;
}
