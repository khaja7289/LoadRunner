vuser_end()
{

	lr_start_transaction("PetStore_SignOut_T01");

	web_reg_find("Text=Sign In", 
		LAST);

	web_url("Account.action_2", 
		"URL=https://petstore.octoperf.com/actions/Account.action?signoff=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Cart.action?removeItemFromCart=&workingItemId=EST-18", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("PetStore_SignOut_T01",LR_AUTO);
	
	lr_output_message("Script Exection done sucessfully");
	web_cache_cleanup();
	web_cleanup_cookies();

	return 0;
}