vuser_init()
{
	lr_output_message("Script Started");
	web_cleanup_cookies();
	web_cache_cleanup();
	web_cleanup_auto_headers();
	web_set_sockets_option("SSL_VERSION", "AUTO");
	
	lr_start_transaction("LaunchPetStore");
	
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
	lr_end_transaction("LaunchPetStore",LR_AUTO);
	
	lr_think_time(5);
	
	lr_start_transaction("EnterToPetStore");
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
	lr_end_transaction("EnterToPetStore",LR_AUTO);
	
	lr_think_time(5);

	lr_start_transaction("ClickOnSignIn");

		web_reg_find("Text=Please enter your username and password", 
		LAST);

	web_link("Sign In", 
		"Text=Sign In", 
		"Snapshot=t11.inf", 
		LAST);

	lr_end_transaction("ClickOnSignIn",LR_AUTO);


	return 0;
}
