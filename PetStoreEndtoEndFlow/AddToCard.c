AddToCard()
{	
	int randIndex;
    char *randVal;
    

	
	lr_start_transaction("AddAproduct");

    // Pick random category from captured list
    randIndex = rand() % atoi(lr_eval_string("{ProductName_count}")) + 1;
    randVal = lr_paramarr_idx("ProductName", randIndex);

    lr_save_string(randVal, "RandCategory");
    lr_output_message("Random category selected in Action2 = %s", lr_eval_string("{RandCategory}"));
	
    web_reg_find("Text={RandCategory}", 
		LAST);

	web_reg_save_param_regexp(
		"ParamName=productId",
		"RegExp=productId=(.*?)\">",
		"Ordinal=All",
		LAST);

    
	web_url("Catalog.action_2", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewCategory=&categoryId={RandCategory}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("AddAproduct",LR_AUTO);
	
	lr_think_time(5);

	lr_start_transaction("SelectProductId");
	

	randIndex = rand() % atoi(lr_eval_string("{productId_count}")) + 1;
    randVal = lr_paramarr_idx("productId", randIndex);

    lr_save_string(randVal, "RandproductId");
    lr_output_message("Random category selected in Action2 = %s", lr_eval_string("{RandproductId}"));

	web_reg_find("Text={RandproductId}", 
		LAST);
	web_reg_save_param_regexp(
		"ParamName=itemId",
		"RegExp=itemId=(.*?)\">",
		"Ordinal=All",
		LAST);

    
	web_link("{RandproductId}", 
		"Text={RandproductId}", 
		"Snapshot=t14.inf", 
		LAST);

	lr_end_transaction("SelectProductId",LR_AUTO);

	lr_think_time(5);
	
	lr_start_transaction("SelectItemId");
	
	
	
	randIndex = rand() % atoi(lr_eval_string("{itemId_count}")) + 1;
    randVal = lr_paramarr_idx("itemId", randIndex);

    lr_save_string(randVal, "RanditemId");
    lr_output_message("Random category selected in Action2 = %s", lr_eval_string("{RanditemId}"));
	
	web_reg_find("Text={RanditemId}", 
		LAST);
	web_link("{RanditemId}", 
		"Text={RanditemId}", 
		"Snapshot=t15.inf", 
		LAST);

	lr_end_transaction("SelectItemId",LR_AUTO);

	lr_think_time(5);
	
	lr_start_transaction("AddToCard");

	web_reg_find("Text=Shopping Cart", 
		LAST);


	web_link("Add to Cart", 
		"Text=Add to Cart", 
		"Snapshot=t16.inf", 
		LAST);

	lr_end_transaction("AddToCard",LR_AUTO);

	return 0;
}
