RemoveTheProduct()
{

	lr_think_time(81);

	lr_start_transaction("ClickOnViewCart");

	web_url("Cart.action_5", 
		"URL=https://petstore.octoperf.com/actions/Cart.action?viewCart=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Order.action?newOrder=&confirmed=true", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(9);

	web_link("Return to Main Menu", 
		"Text=Return to Main Menu", 
		"Snapshot=t25.inf", 
		LAST);

	web_image("sm_birds.gif", 
		"Src=../images/sm_birds.gif", 
		"Snapshot=t26.inf", 
		LAST);

	web_link("AV-CB-01", 
		"Text=AV-CB-01", 
		"Snapshot=t27.inf", 
		LAST);

	web_link("Add to Cart_2", 
		"Text=Add to Cart", 
		"Snapshot=t28.inf", 
		LAST);

	lr_start_transaction("ClickOnViewCartR");

	web_reg_find("Text=Shopping Cart", 
		LAST);

	lr_think_time(30);

	web_image("cart.gif", 
		"Src=../images/cart.gif", 
		"Snapshot=t29.inf", 
		LAST);

	lr_end_transaction("ClickOnViewCartR",LR_AUTO);

	lr_end_transaction("ClickOnViewCart",LR_AUTO);

	lr_start_transaction("ClickOnRemove");

	web_reg_find("Text=Your cart is empty.", 
		LAST);

	lr_think_time(48);

	web_link("Remove", 
		"Text=Remove", 
		"Snapshot=t30.inf", 
		LAST);

	lr_end_transaction("ClickOnRemove",LR_AUTO);

	return 0;
}
