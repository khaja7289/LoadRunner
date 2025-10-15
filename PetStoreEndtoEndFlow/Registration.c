Registration()
{


	char username[5];
	char pass[4];
	char firstName[6];
	char lastName[6];
	char phone[11];
	char zip[6];
	int i;
	
	
	
	lr_start_transaction("ClickOnRegistration");

	web_reg_find("Text=User Information", 
		LAST);

	web_link("Register Now!", 
		"Text=Register Now!", 
		"Snapshot=t59.inf", 
		LAST);

	lr_end_transaction("ClickOnRegistration",LR_AUTO);
	
	lr_think_time(5);
	
	lr_start_transaction("SubmitRegistration");
	
	web_reg_find("Text=Elevate you load-testing", 
		LAST);
	
	for (i = 0; i < 4; i++) {
	    username[i] = 'A' + (rand() % 26); // Random uppercase letter
	}
	username[4] = '\0'; // Null-terminate the string
	lr_save_string(username, "randomUsername");
	
	for (i = 0; i < 4; i++) {
	    pass[i] = 'a' + (rand() % 26); // Random lowercase letter
	}
	pass[4] = '\0'; // Null-terminate the string
	lr_save_string(pass, "randompass");
	
	
	for (i = 0; i < 5; i++) {
	    firstName[i] = 'a' + (rand() % 26);
	}
	firstName[5] = '\0';
	
	// Generate random last name
	for (i = 0; i < 5; i++) {
	    lastName[i] = 'a' + (rand() % 26);
	}
	lastName[5] = '\0';
	
	lr_save_string(firstName, "randomFirstName");
	lr_save_string(lastName, "randomLastName");
	
	
	phone[0] = '9' + rand() % 3; 

   
    for(i = 1; i < 10; i++) {
        phone[i] = '0' + rand() % 10;
    }

    phone[10] = '\0';

    lr_save_string(phone, "RandomPhone");

    
	for(i = 0; i < 6; i++) {
        zip[i] = '0' + rand() % 10;
    }

    zip[6] = '\0'; // Null-terminate the string

    lr_save_string(zip, "RandomZip");

	
	web_submit_form("Account.action", 
		"Snapshot=t60.inf", 
		ITEMDATA, 
		"Name=username", "Value={randomUsername}", ENDITEM, 
		"Name=password", "Value={randompass}", ENDITEM, 
		"Name=repeatedPassword", "Value={randompass}", ENDITEM, 
		"Name=account.firstName", "Value={randomFirstName}", ENDITEM, 
		"Name=account.lastName", "Value={randomLastName}", ENDITEM, 
		"Name=account.email", "Value={randomFirstName}{randomLastName}@gmail.com", ENDITEM, 
		"Name=account.phone", "Value={RandomPhone}", ENDITEM, 
		"Name=account.address1", "Value=dummy", ENDITEM, 
		"Name=account.address2", "Value=dummy", ENDITEM, 
		"Name=account.city", "Value=dummy", ENDITEM, 
		"Name=account.state", "Value=dummy", ENDITEM, 
		"Name=account.zip", "Value={RandomZip}", ENDITEM, 
		"Name=account.country", "Value=india", ENDITEM, 
		"Name=account.languagePreference", "Value=english", ENDITEM, 
		"Name=account.favouriteCategoryId", "Value=FISH", ENDITEM, 
		"Name=account.listOption", "Value=true", ENDITEM, 
		"Name=account.bannerOption", "Value=true", ENDITEM, 
		"Name=newAccount", "Value=Save Account Information", ENDITEM, 
		LAST);
	lr_end_transaction("SubmitRegistration",LR_AUTO);
	
	lr_think_time(5);
	
	lr_start_transaction("SignOut");

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

	lr_end_transaction("SignOut",LR_AUTO);
	
	return 0;
}