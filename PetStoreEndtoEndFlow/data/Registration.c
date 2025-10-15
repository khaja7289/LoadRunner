Registration()
{

	web_url("current", 
		"URL=http://clients2.google.com/time/1/current?cup2key=7:Dy_LWrgkaGtxj2s17LLFbXLDICNPE_uy4PGHl9adDF0&cup2hreq=e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"Body= ", 
		LAST);

	web_url("petstore.octoperf.com", 
		"URL=https://petstore.octoperf.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(188);

	web_url("current_2", 
		"URL=http://clients2.google.com/time/1/current?cup2key=7:lnBRJPIpBOK1zjABA-P0S6S4va19dZq8Q_UqeFKMea4&cup2hreq=e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		LAST);

	web_url("generate_204", 
		"URL=http://www.gstatic.com/generate_204", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=13:xHeayQ9H1yjj5mp1AtqnOl7X9KyRncEvszcrHwDAoMU&cup2hreq=5c87c247edfd39403bb4dbc3061f792ab0a5e6803b342c74a7d3b5c5cfc82ce8", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromiumcrx\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"efaidnbmnnnibpcajpcglclefindmkaj\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6836,\"installedby\":\"external\",\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.f7a1570304e9418438e39f536fbc795be324c3afc25c26f9a4457703d4b477d2\"}]},\"ping\":{\"ping_freshness\":\"{1d8f6d4e-bd25-43cd-9168-ffdc2df00aae}\",\"rd\":6848},\"updatecheck\":{},\"version\":\"25.9.2.0\"}],\""
		"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.26100.6584\"},\"prodversion\":\"120.0.6099.63\",\"protocol\":\"3.1\",\"requestid\":\"{fdc47a28-48ba-45a4-a646-e60f828f8847}\",\"sessionid\":\"{ffe25e2b-08ed-408a-8c7c-473e764442a8}\",\"updaterversion\":\""
		"120.0.6099.63\"}}", 
		LAST);

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=13:Dwbc5jN2kwZdoxpY2QolQe1_MI7luxunH7iK0OpNeRE&cup2hreq=ff2b5b897a387adb2d16063815008689e0fad0bbfef1aedf7b14fff0661cff2e", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromium\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"_experimental_mdl_version\":\"\",\"appid\":\"cffplpkejcbdpfnfabnjikeicbedmifn\",\"cohort\":\"1:1vi9:\",\"cohortname\":\"Public Phase 0\",\"enabled\":true,\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.cab4d1f0a6a2a1afecae808a520f6690dd2b9d58bf54762877f2dc9715d55461\"}]},\"ping\":{\"ping_freshness\":\"{2f42d9ac-8133-4cba-8810-7b1ab382ece6}\",\"rd\":6847},\""
		"updatecheck\":{},\"version\":\"2023.7.28.10\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"cohort\":\"1:bm1:39w9@0.02\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.cf1bd60480ee975563d5cd068e349b313339ffe7f8bef054a0b3fde00c117c2f\"}]},\"ping\":{\"ping_freshness\":\"{aafa410e-68de-42b1-9856-a6be633d1d4c}\",\"rd\":6847},\"updatecheck\":{},\"version\":\"9.60.0\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\""
		"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.caf22da361a099ee7f504cfd6018872cff61e16946d0a5a57fb07c529bfa8072\"}]},\"ping\":{\"ping_freshness\":\"{566f11c2-b242-4d58-8366-93c58107e77a}\",\"rd\":6847},\"updatecheck\":{},\"version\":\"2025.9.29.1\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"cohort\":\"1:lwl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6828,\"lang\":\"en-US\",\""
		"packages\":{\"package\":[{\"fp\":\"1.50030f0a9b7c60f41289dd11530f986633657560169c0a9154c989d091686fc3\"}]},\"ping\":{\"ping_freshness\":\"{3eecd6e6-6ce3-459b-b740-0857385224fc}\",\"rd\":6847},\"updatecheck\":{},\"version\":\"543\"},{\"accept_locale\":\"ENUS500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"cohort\":\"1:s6f:3a2f@0.025\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.6386ea2fc81903dd5c5276502984bc34e9a9a4788a7a565a4a1c1c9ac79428ff\"}]},\"ping\":{\"ping_freshness\":\"{428a7b23-943d-4fd4-952c-42008f301938}\",\"rd\":6847},\"updatecheck\":{},\"version\":\"20250910.807035025.14\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.44c97a8527ef50cab95a16c5e78cd321cbdf315726823afe7e0482af9eb18319\"}]},\"ping\":{\"ping_freshness"
		"\":\"{ea263477-0b87-40f3-9d6d-1f2ae2a8750a}\",\"rd\":6847},\"updatecheck\":{},\"version\":\"67\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.3eb16d6c28b502ac4cfee8f4a148df05f4d93229fa36a71db8b08d06329ff18a\"}]},\"ping\":{\"ping_freshness\":\"{baeb07bf-ec70-4bb9-ba2d-d1b09bd583fb}\",\"rd\":6847},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\""
		"jflookgnkcckhobaglndicnbbgbonegd\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.78f1fe6e6efb3e273133cdcf220f11369efab035119b7b7721078ce509aa4935\"}]},\"ping\":{\"ping_freshness\":\"{8ef47381-a167-4694-9346-1b2e17446df4}\",\"rd\":6847},\"updatecheck\":{},\"version\":\"3083\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6828,\"lang\":\"en-US\",\""
		"packages\":{\"package\":[{\"fp\":\"1.2638e3c2d1fa1d417bfdc31dd21bc938f106d3b436a6488b41b014ca9e2b7541\"}]},\"ping\":{\"ping_freshness\":\"{c6b20aca-690b-4147-89ed-70fc8268ba27}\",\"rd\":6847},\"updatecheck\":{},\"version\":\"1.0.0.17\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"cohort\":\"1:ut9/1a0f:\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.c4ae1aed178641ca90a8fdc3edf11a5ff3fd25bcba49736af8245caa38b03bc8\"}]},\"ping\":{\"ping_freshness\":\"{380482e9-5fb4-4e93-ad84-83a29f53a94c}\",\"rd\":6847},\"updatecheck\":{},\"version\":\"2025.9.29.62\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.075b849fbd2d3537cecab0fb70e95e499552d875392cd6488cadafbfd796013f\"}]},\"ping\":{\"ping_freshness\""
		":\"{1b32334f-f63e-4f59-a5d6-9263fc042456}\",\"rd\":6847},\"updatecheck\":{},\"version\":\"1442\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"cohort\":\"1:2879:\",\"cohortname\":\"Auto androidlowmem\",\"enabled\":true,\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.89154bc3b49621b75520caa675eba80e0de292b05d3e7bf3256fbbf1e7c5d91c\"}]},\"ping\":{\"ping_freshness\":\"{04feefd7-4c59-4a58-aeab-9ee55a9555e7}\",\"rd\":6847},\"updatecheck\":{},\"version\":\"10061\"},{"
		"\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{74489cec-c1d8-45f8-b341-fad3f99bbcea}\",\"rd\":6847},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"cohort\":\"1:10zr:\",\"cohortname\":\"Auto\",\"enabled\""
		":true,\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.e444ba601ac72b669514e6788bc458ac6b4a3f4400f18ad9b297a84eb27009e5\"}]},\"ping\":{\"ping_freshness\":\"{a46b4a5e-faa3-4176-9b41-2f1e4dd90c06}\",\"rd\":6847},\"updatecheck\":{},\"version\":\"1.0.7.1744928549\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{df9a4532-a558-4bd3-a564-f4e809009a1c}\",\"rd\":6847},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"cohort\":\"1:26yf:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.51de3d8f7bc17c693027111b511a7f40ea89ec35f264c073b7f088fcb6fdacfa\"}]},\"ping\":{\"ping_freshness\":\""
		"{14987acb-a47c-4d69-a69a-39b443ad09bf}\",\"rd\":6847},\"updatecheck\":{},\"version\":\"2025.9.28.1\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.4497d8060d0e53c12b4403aa9ebe7e827d4880bae3f4139a26a4feb7ed64c4a2\"}]},\"ping\":{\"ping_freshness\":\"{a17d14ad-6f71-439b-9be8-5755bfdff72c}\",\"rd\":6847},\"updatecheck\":{},\"version\":\"2025.6.13.84507\"},{\""
		"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"cohort\":\"1:z1x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.56c21927faa028be6ce18c931660eec37e41da4bfbfd47cafa48350f828c0dbd\"}]},\"ping\":{\"ping_freshness\":\"{89431162-b19a-4864-91fe-9d3d87f77095}\",\"rd\":6847},\"updatecheck\":{},\"version\":\"2025.7.24.0\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\""
		"enabled\":true,\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.38c89b12bb20a8f2751c9c7cd2e31c173a47af08c115e1ecccc2f5151a2cf2c6\"}]},\"ping\":{\"ping_freshness\":\"{2ceda047-7398-4130-bca2-5c02a48fc5de}\",\"rd\":6847},\"updatecheck\":{},\"version\":\"2025.6.16.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\""
		"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.26100.6584\"},\"prodversion\":\"120.0.6099.63\",\"protocol\":\"3.1\",\"requestid\":\"{65ecd924-ec7c-46b7-9a4f-631968185b71}\",\"sessionid\":\"{120d1f06-036a-48c7-b36f-0a2661a867c2}\",\"updaterversion\":\"120.0.6099.63\"}}", 
		LAST);

	web_url("current_3", 
		"URL=http://clients2.google.com/time/1/current?cup2key=7:JRxv3rM-vx8PVhvjoFV-jWO34g8mKEs7O6PzAMD3t3E&cup2hreq=e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		LAST);

	web_url("current_4", 
		"URL=http://clients2.google.com/time/1/current?cup2key=7:_N9cUf80reQfEkz1vjyB5O3z5kKoXDJ6POoNZ8yIhW0&cup2hreq=e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("json_3", 
		"URL=https://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromium\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"cohort\":\"1::\",\"enabled\":true,\"event\":[{\"download_time_ms\":4039,\"downloaded\":1725,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"1.0.0.18\",\"previousversion\":\"1.0.0.17\",\"total\":1725,\"url\":\"https://storage.googleapis.com/update-delta/llkgjffcdpffmhiakmfcdcblohccpfmo/"
		"b21e210b-1ab0-4a48-9c8c-f7139cac3374\"},{\"diffresult\":1,\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.ee4b855eb4e00f150fe268baead4f478bf3f5a6b9b8b89026d71e09c368876f8\",\"nextversion\":\"1.0.0.18\",\"previousfp\":\"1.2638e3c2d1fa1d417bfdc31dd21bc938f106d3b436a6488b41b014ca9e2b7541\",\"previousversion\":\"1.0.0.17\"}],\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.ee4b855eb4e00f150fe268baead4f478bf3f5a6b9b8b89026d71e09c368876f8\"}]},\"version\":\"1.0.0.18\"}],\""
		"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.26100.6584\"},\"prodversion\":\"120.0.6099.63\",\"protocol\":\"3.1\",\"requestid\":\"{412f0f1b-4dab-4e14-b793-54a3c740e013}\",\"sessionid\":\"{120d1f06-036a-48c7-b36f-0a2661a867c2}\",\"updaterversion\":\""
		"120.0.6099.63\"}}", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_add_cookie("kndctr_9E1005A551ED61CA0A490D45_AdobeOrg_identity=CiYwMjA2NjU5MDU0Mzk1MTQ3ODI5MTIwOTI5MjE5NjY0Njg1MzEyMFITCPSR2sGbMxABGAEqBElORDEwAPAB9JHawZsz; DOMAIN=acrobat.adobe.com");

	lr_think_time(27);

	web_url("ote-config.json", 
		"URL=https://acrobat.adobe.com/dc-hosted-extension/ote-config.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ote-config.json_2", 
		"URL=https://acrobat.adobe.com/dc-hosted-extension/ote-config.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	lr_think_time(28);

	web_url("Catalog.action", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(188);

	lr_start_transaction("ClickOnSignIn");

	web_url("generate_204_2", 
		"URL=http://www.gstatic.com/generate_204", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_find("Text=Register Now!", 
		LAST);

	web_url("Account.action;jsessionid=19061EAD33C7F9662EC063438F1A1265", 
		"URL=https://petstore.octoperf.com/actions/Account.action;jsessionid=19061EAD33C7F9662EC063438F1A1265?signonForm=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("ClickOnSignIn",LR_AUTO);

	lr_start_transaction("ClickOnRegistration");

	web_reg_find("Text=User Information", 
		LAST);

	web_reg_find("Text=User Information", 
		LAST);

	lr_think_time(65);

	web_link("Register Now!", 
		"Text=Register Now!", 
		"Snapshot=t59.inf", 
		LAST);

	lr_end_transaction("ClickOnRegistration",LR_AUTO);

	web_reg_find("Text=Elevate you load-testing", 
		LAST);

	web_reg_find("Text=Elevate you load-testing", 
		LAST);

	web_submit_form("Account.action", 
		"Snapshot=t60.inf", 
		ITEMDATA, 
		"Name=username", "Value=LMXN", ENDITEM, 
		"Name=password", "Value=abcd", ENDITEM, 
		"Name=repeatedPassword", "Value=abcd", ENDITEM, 
		"Name=account.firstName", "Value=j", ENDITEM, 
		"Name=account.lastName", "Value=khaja", ENDITEM, 
		"Name=account.email", "Value=LMNX@gmail.com", ENDITEM, 
		"Name=account.phone", "Value=9618419044", ENDITEM, 
		"Name=account.address1", "Value=dummy", ENDITEM, 
		"Name=account.address2", "Value=dummy", ENDITEM, 
		"Name=account.city", "Value=dummy", ENDITEM, 
		"Name=account.state", "Value=dummy", ENDITEM, 
		"Name=account.zip", "Value=961651", ENDITEM, 
		"Name=account.country", "Value=india", ENDITEM, 
		"Name=account.languagePreference", "Value=english", ENDITEM, 
		"Name=account.favouriteCategoryId", "Value=FISH", ENDITEM, 
		"Name=account.listOption", "Value=true", ENDITEM, 
		"Name=account.bannerOption", "Value=true", ENDITEM, 
		"Name=newAccount", "Value=Save Account Information", ENDITEM, 
		LAST);

	return 0;
}