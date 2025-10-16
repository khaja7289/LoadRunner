Login()
{	
	Registration();
	lr_start_transaction("PetStore_ClickOnSignIn_T01");

		web_reg_find("Text=Please enter your username and password", 
		LAST);

	web_link("Sign In", 
		"Text=Sign In", 
		"Snapshot=t11.inf", 
		LAST);
	lr_end_transaction("PetStore_ClickOnSignIn_T01",LR_AUTO);
	
	lr_think_time(5);
	
	lr_start_transaction("PetStore_Login_T01");
		web_reg_find("Text=My Account", 
		LAST);
	web_reg_save_param_regexp(
		"ParamName=ProductName",
		"RegExp=categoryId=(.*?)\" shape=\"RECT\"",
		"Ordinal=All",
		LAST);

	web_submit_form("Account.action", 
		"Snapshot=t12.inf", 
		ITEMDATA, 
		"Name=username", "Value={randomUsername}", ENDITEM, 
		"Name=password", "Value={randompass}", ENDITEM, 
		"Name=signon", "Value=Login", ENDITEM, 
		LAST);

	lr_end_transaction("PetStore_Login_T01",LR_AUTO);
	return 0;
}
