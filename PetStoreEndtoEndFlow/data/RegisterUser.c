RegisterUser()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("generate_204", 
		"URL=http://www.gstatic.com/generate_204", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ajs-worker.html", 
		"URL=https://acrobat.adobe.com/dc-chrome-extension/ajs-worker.html?callingApp=efaidnbmnnnibpcajpcglclefindmkaj", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../dc-rendition-provider/AJS/build/acrobatProxy_we.efff5b105b5b76fadae9.js", "Referer=https://acrobat.adobe.com/", ENDITEM, 
		"Url=../dc-rendition-provider/AJS/build/wasm_acrobat_we.d0f853d7ced25108f963d162d36b8ec1.js", "Referer=https://acrobat.adobe.com/dc-rendition-provider/AJS/build/acrobatProxy_we.efff5b105b5b76fadae9.js", ENDITEM, 
		"Url=../dc-rendition-provider/AJS/build/wasm_acrobat_we.7626bb265cd2308bc39dfa4f41c93a2a.wasm", "Referer=https://acrobat.adobe.com/dc-rendition-provider/AJS/build/acrobatProxy_we.efff5b105b5b76fadae9.js", ENDITEM, 
		LAST);

	return 0;
}