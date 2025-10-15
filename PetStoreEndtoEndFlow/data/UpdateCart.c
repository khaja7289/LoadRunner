UpdateCart()
{

	lr_start_transaction("ClickOnViewcart");

	web_reg_find("Text=Sub Total:", 
		LAST);

	lr_think_time(69);

	web_url("Cart.action", 
		"URL=https://petstore.octoperf.com/actions/Cart.action?viewCart=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId=EST-9", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	lr_end_transaction("ClickOnViewcart",LR_AUTO);

	lr_think_time(7);

	lr_start_transaction("UpdateCart");

	web_submit_form("Cart.action_2", 
		"Snapshot=t18.inf", 
		ITEMDATA, 
		"Name=EST-9", "Value=1", ENDITEM, 
		"Name=updateCartQuantities", "Value=Update Cart", ENDITEM, 
		LAST);

	web_reg_find("Text=5", 
		LAST);

	lr_think_time(13);

	web_submit_form("Cart.action_3", 
		"Snapshot=t19.inf", 
		ITEMDATA, 
		"Name=EST-9", "Value=5", ENDITEM, 
		"Name=updateCartQuantities", "Value=Update Cart", ENDITEM, 
		LAST);

	lr_end_transaction("UpdateCart",LR_AUTO);

	return 0;
}
