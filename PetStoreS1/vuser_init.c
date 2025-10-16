vuser_init()
{
	lr_output_message("Script Started");
	web_cleanup_cookies();
	web_cache_cleanup();
	web_cleanup_auto_headers();
	web_set_sockets_option("SSL_VERSION", "AUTO");
	
	lr_start_transaction("PetStore_LaunchPetStore_T01");
	
		web_reg_find("Text=Welcome to JPetStore 6", 
		LAST);
	web_url("petstore.octoperf.com", 
		"URL=https://petstore.octoperf.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("PetStore_LaunchPetStore_T01",LR_AUTO);
	
	lr_think_time(5);
	
	lr_start_transaction("PetStore_EnterToPetStore_T02");
	web_reg_find("Text=OctoPerf", 
		LAST);

	web_url("Catalog.action", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("PetStore_EnterToPetStore_T02",LR_AUTO);
	
	lr_think_time(5);

	lr_start_transaction("PetStore_ClickOnSignIn_T03");

		web_reg_find("Text=Please enter your username and password", 
		LAST);

	web_link("Sign In", 
		"Text=Sign In", 
		"Snapshot=t11.inf", 
		LAST);

	lr_end_transaction("PetStore_ClickOnSignIn_T03",LR_AUTO);


	return 0;
}
