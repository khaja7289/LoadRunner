AddToCard()
{

	lr_start_transaction("AddAproduct");

	web_reg_find("Text=Product ID", 
		LAST);

	lr_think_time(96);

	web_url("Catalog.action_2", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewCategory=&categoryId=DOGS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AddAproduct",LR_AUTO);

	lr_start_transaction("SelectProductId");

	web_reg_find("Text=K9-DL-01", 
		LAST);

	lr_think_time(50);

	web_link("K9-DL-01", 
		"Text=K9-DL-01", 
		"Snapshot=t14.inf", 
		LAST);

	lr_end_transaction("SelectProductId",LR_AUTO);

	lr_start_transaction("SelectItemId");

	web_reg_find("Text=ST-9", 
		LAST);

	lr_think_time(56);

	web_link("EST-9", 
		"Text=EST-9", 
		"Snapshot=t15.inf", 
		LAST);

	lr_end_transaction("SelectItemId",LR_AUTO);

	lr_start_transaction("AddToCard");

	web_reg_find("Text=Shopping Cart", 
		LAST);

	lr_think_time(62);

	web_link("Add to Cart", 
		"Text=Add to Cart", 
		"Snapshot=t16.inf", 
		LAST);

	lr_end_transaction("AddToCard",LR_AUTO);

	return 0;
}
