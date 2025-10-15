dummyLogin()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("generate_204", 
		"URL=http://www.gstatic.com/generate_204", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(38);

	web_custom_request("json", 
		"URL=http://update.googleapis.com/service/update2/json?cup2key=13:9sCaKSNN8KPIwIvkH7PPmw7x96_e6uUB8-9wNGbLkJQ&cup2hreq=5758a958f5e59714c21621b0f935fc1f2783a5302a624efa880bb7ddf62fdceb", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromium\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"_experimental_mdl_version\":\"\",\"appid\":\"cffplpkejcbdpfnfabnjikeicbedmifn\",\"cohort\":\"1:1vi9:\",\"cohortname\":\"Public Phase 0\",\"enabled\":true,\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.cab4d1f0a6a2a1afecae808a520f6690dd2b9d58bf54762877f2dc9715d55461\"}]},\"ping\":{\"ping_freshness\":\"{79973c13-40b5-4f18-a7cd-24601219d368}\",\"rd\":6846},\""
		"updatecheck\":{},\"version\":\"2023.7.28.10\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"cohort\":\"1:bm1:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.cf1bd60480ee975563d5cd068e349b313339ffe7f8bef054a0b3fde00c117c2f\"}]},\"ping\":{\"ping_freshness\":\"{71bef158-25c4-4920-b482-6e7620e48536}\",\"rd\":6846},\"updatecheck\":{},\"version\":\"9.60.0\"},{\"accept_locale\":\"ENUS500000\",\"appid\":\""
		"obedbbhbpmojnkanicioggnmelmoomoc\",\"cohort\":\"1:s6f:3a2f@0.025\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.fa0ce4252841c4f6d69b413a82aee8f2070eefc67e95b0ecc5ed67b8b2c18fc2\"}]},\"ping\":{\"ping_freshness\":\"{dc56109b-010f-4bad-88a4-213a886db1db}\",\"rd\":6846},\"updatecheck\":{},\"version\":\"20250805.789100898.14\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\""
		"enabled\":true,\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.03e9a2f2431495796e0fa031f02e77bde22dae866f849f83b327f1b463e2e72f\"}]},\"ping\":{\"ping_freshness\":\"{aa7a0edd-456c-4494-9c89-aa1e3b789e1a}\",\"rd\":6846},\"updatecheck\":{},\"version\":\"2025.8.25.1\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"cohort\":\"1:j5l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.3eb16d6c28b502ac4cfee8f4a148df05f4d93229fa36a71db8b08d06329ff18a\"}]},\"ping\":{\"ping_freshness\":\"{df597685-ea79-41e4-b1c3-7d516f067759}\",\"rd\":6846},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"cohort\":\"1:2879:\",\"cohortname\":\"Auto androidlowmem\",\"enabled\":true,\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.fd08eecbb1c8915ae4af5f329d2c3af2fab03a8afa980d29b8c224146ce13cfc\"}]},\"ping\":{\"ping_freshness\":\""
		"{2e1c5315-4145-458e-903c-e160d595e5bc}\",\"rd\":6846},\"updatecheck\":{},\"version\":\"10047\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"cohort\":\"1:cux:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.44c97a8527ef50cab95a16c5e78cd321cbdf315726823afe7e0482af9eb18319\"}]},\"ping\":{\"ping_freshness\":\"{c4ab0015-2883-43d5-96a4-9a3757a31939}\",\"rd\":6846},\"updatecheck\":{},\"version\":\"67\"},{\"appid\":\""
		"lmelglejhemejginpboagddgdfbepgmp\",\"cohort\":\"1:lwl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.859a48be2421ee521b643d488d028685c7045353c280e4d4f2033101cc61f5a4\"}]},\"ping\":{\"ping_freshness\":\"{1d53aa70-58dc-44f2-bb0a-8451e4c7f357}\",\"rd\":6846},\"updatecheck\":{},\"version\":\"541\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":6828,\"lang\":\"en-US\",\""
		"packages\":{\"package\":[{\"fp\":\"1.2638e3c2d1fa1d417bfdc31dd21bc938f106d3b436a6488b41b014ca9e2b7541\"}]},\"ping\":{\"ping_freshness\":\"{a73efcc4-5638-45c2-8925-6469cdd0346a}\",\"rd\":6846},\"updatecheck\":{},\"version\":\"1.0.0.17\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.4eec7d35d2705071876509626b921cd650d807fe3154e0d9af52859901c9b67b\"}]},\""
		"ping\":{\"ping_freshness\":\"{ff2967b8-4c85-44cd-9fd6-efbd69490130}\",\"rd\":6846},\"updatecheck\":{},\"version\":\"3082\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.b3ab5b895e930c283154f15d6d175e34dbcb50012f21c1d1fc35052ad7ae6c25\"}]},\"ping\":{\"ping_freshness\":\"{b0e6e971-88bf-45eb-b2d3-3fcf909727b5}\",\"rd\":6846},\"updatecheck\":{},\""
		"version\":\"1436\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"cohort\":\"1:ut9/1a0f:\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.76d4e34aada5db55aa46a5afa7fcf67d5719574de473b2068b1b2be1b6c6b7a6\"}]},\"ping\":{\"ping_freshness\":\"{aef47d90-b625-414e-a0a4-a7f119283a21}\",\"rd\":6846},\"updatecheck\":{},\"version\":\"2025.9.22.61\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"cohort\":\"1:10zr:\",\""
		"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.e444ba601ac72b669514e6788bc458ac6b4a3f4400f18ad9b297a84eb27009e5\"}]},\"ping\":{\"ping_freshness\":\"{180d43ef-2ddb-4ad3-8e24-19552e429a72}\",\"rd\":6846},\"updatecheck\":{},\"version\":\"1.0.7.1744928549\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"cohort\":\"1:wvr:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\""
		":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{e0067287-a93d-41ef-88ca-4aaa67bfbc07}\",\"rd\":6846},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"cohort\":\"1:w0x:\",\"cohortname\":\"All users\",\"enabled\":true,\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\""
		"ping_freshness\":\"{20a58c8c-79e2-42b1-8080-ac931b54b243}\",\"rd\":6846},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"cohort\":\"1:26yf:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.7bf9ca25468c499b265c8d3c98300141fbd562e7f32b54b583a2706802117887\"}]},\"ping\":{\"ping_freshness\":\"{ec3bcefd-c58d-4341-b4b3-d25cf3a879d7}\",\"rd\":6846},\"updatecheck\":{},\"version\":\""
		"2025.9.21.1\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"cohort\":\"1:w59:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.4497d8060d0e53c12b4403aa9ebe7e827d4880bae3f4139a26a4feb7ed64c4a2\"}]},\"ping\":{\"ping_freshness\":\"{39a6ad64-4c1f-4cba-8d0f-c50f9bc52657}\",\"rd\":6846},\"updatecheck\":{},\"version\":\"2025.6.13.84507\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"cohort\":\"1:1uh3:\",\"cohortname\":\""
		"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.38c89b12bb20a8f2751c9c7cd2e31c173a47af08c115e1ecccc2f5151a2cf2c6\"}]},\"ping\":{\"ping_freshness\":\"{8c1aa4aa-eb1d-435c-97cb-60a377acf78b}\",\"rd\":6846},\"updatecheck\":{},\"version\":\"2025.6.16.0\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"cohort\":\"1:z1x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\":[{\""
		"fp\":\"1.56c21927faa028be6ce18c931660eec37e41da4bfbfd47cafa48350f828c0dbd\"}]},\"ping\":{\"ping_freshness\":\"{e96f57ab-ed3b-4cda-85a2-1b39c1ad88f2}\",\"rd\":6846},\"updatecheck\":{},\"version\":\"2025.7.24.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version"
		"\":\"10.0.26100.6584\"},\"prodversion\":\"120.0.6099.63\",\"protocol\":\"3.1\",\"requestid\":\"{015ba9dd-2284-490a-977c-7dc449864ff5}\",\"sessionid\":\"{4b082d15-9263-427d-aaf6-addcee69b810}\",\"updaterversion\":\"120.0.6099.63\"}}", 
		LAST);

	lr_think_time(53);

	web_custom_request("json_2", 
		"URL=http://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromium\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"accept_locale\":\"ENUS500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"cohort\":\"1:s6f:3a2f@0.025\",\"cohortname\":\"Auto\",\"enabled\":true,\"event\":[{\"download_time_ms\":20111,\"downloaded\":0,\"downloader\":\"bits\",\"errorcode\":-2145386477,\"eventresult\":0,\"eventtype\":14,\"nextversion\":\"20250910.807035025.14\",\"previousversion\":\"20250805.789100898.14\",\"total\":4381953,"
		"\"url\":\"http://edgedl.me.gvt1.com/edgedl/diffgen-puffin/obedbbhbpmojnkanicioggnmelmoomoc/a3a660358b82b71dd3cd8b4f2280795ae2bde83ff657a165b382d0c73b1bb847\"},{\"download_time_ms\":32089,\"downloaded\":4381953,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"20250910.807035025.14\",\"previousversion\":\"20250805.789100898.14\",\"total\":4381953,\"url\":\"https://edgedl.me.gvt1.com/edgedl/diffgen-puffin/obedbbhbpmojnkanicioggnmelmoomoc/"
		"a3a660358b82b71dd3cd8b4f2280795ae2bde83ff657a165b382d0c73b1bb847\"},{\"diffresult\":1,\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.6386ea2fc81903dd5c5276502984bc34e9a9a4788a7a565a4a1c1c9ac79428ff\",\"nextversion\":\"20250910.807035025.14\",\"previousfp\":\"1.fa0ce4252841c4f6d69b413a82aee8f2070eefc67e95b0ecc5ed67b8b2c18fc2\",\"previousversion\":\"20250805.789100898.14\"}],\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.6386ea2fc81903dd5c5276502984bc34e9a9a4788a7a565a4a1c1c9ac79428ff\"}]},\"version\":\"20250910.807035025.14\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.26100.6584\"},\"prodversion\":\"120.0.6099.63\",\"protocol\":\"3.1\",\"requestid\":\""
		"{332999b9-0ac9-4726-87b0-fd797d8c9e71}\",\"sessionid\":\"{4b082d15-9263-427d-aaf6-addcee69b810}\",\"updaterversion\":\"120.0.6099.63\"}}", 
		LAST);

	lr_think_time(58);

	web_custom_request("json_3", 
		"URL=http://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromium\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"cohort\":\"1:v3l:\",\"cohortname\":\"Auto\",\"enabled\":true,\"event\":[{\"download_time_ms\":4050,\"downloaded\":2882,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"2025.9.29.1\",\"previousversion\":\"2025.8.25.1\",\"total\":2882,\"url\":\"http://edgedl.me.gvt1.com/edgedl/diffgen-puffin/kiabhabjdbkjdpjbpigfodbdjmbglcoo"
		"/d506690f39509fabb0f6be2dfaf987a6459f7b909178e12b560cce29bf94f01f\"},{\"diffresult\":1,\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.caf22da361a099ee7f504cfd6018872cff61e16946d0a5a57fb07c529bfa8072\",\"nextversion\":\"2025.9.29.1\",\"previousfp\":\"1.03e9a2f2431495796e0fa031f02e77bde22dae866f849f83b327f1b463e2e72f\",\"previousversion\":\"2025.8.25.1\"}],\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.caf22da361a099ee7f504cfd6018872cff61e16946d0a5a57fb07c529bfa8072\"}]},\"version\":\"2025.9.29.1\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.26100.6584\"},\"prodversion\":\"120.0.6099.63\",\"protocol\":\"3.1\",\"requestid\":\""
		"{243dcddb-c70c-4968-b465-e736d1d710bd}\",\"sessionid\":\"{4b082d15-9263-427d-aaf6-addcee69b810}\",\"updaterversion\":\"120.0.6099.63\"}}", 
		LAST);

	lr_think_time(4);

	web_custom_request("json_4", 
		"URL=http://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromium\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"cohort\":\"1:2879:\",\"cohortname\":\"Auto androidlowmem\",\"enabled\":true,\"event\":[{\"download_time_ms\":4048,\"downloaded\":1556,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"10061\",\"previousversion\":\"10047\",\"total\":1556,\"url\":\"http://edgedl.me.gvt1.com/edgedl/diffgen-puffin/"
		"hfnkpimlhhgieaddgfemjhofmfblmnib/52cdaadbbfcc1e8228b7dbd8655c597ca57974b0e15b52c7561287cd2a45deab\"},{\"diffresult\":1,\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.89154bc3b49621b75520caa675eba80e0de292b05d3e7bf3256fbbf1e7c5d91c\",\"nextversion\":\"10061\",\"previousfp\":\"1.fd08eecbb1c8915ae4af5f329d2c3af2fab03a8afa980d29b8c224146ce13cfc\",\"previousversion\":\"10047\"}],\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.89154bc3b49621b75520caa675eba80e0de292b05d3e7bf3256fbbf1e7c5d91c\"}]},\"version\":\"10061\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.26100.6584\"},\"prodversion\":\"120.0.6099.63\",\"protocol\":\"3.1\",\"requestid\":\""
		"{dc2aa443-725d-4679-9b8a-7a87a5ef0af9}\",\"sessionid\":\"{4b082d15-9263-427d-aaf6-addcee69b810}\",\"updaterversion\":\"120.0.6099.63\"}}", 
		LAST);

	lr_think_time(19);

	web_custom_request("json_5", 
		"URL=http://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromium\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"cohort\":\"1:lwl:\",\"cohortname\":\"Auto\",\"enabled\":true,\"event\":[{\"download_time_ms\":4058,\"downloaded\":261805,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"543\",\"previousversion\":\"541\",\"total\":261805,\"url\":\"http://edgedl.me.gvt1.com/edgedl/diffgen-puffin/lmelglejhemejginpboagddgdfbepgmp/"
		"921ca8e96f4547d0144e747cdd3798fb175f6bfa51af7f1e3358d66f5329e18a\"},{\"diffresult\":1,\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.50030f0a9b7c60f41289dd11530f986633657560169c0a9154c989d091686fc3\",\"nextversion\":\"543\",\"previousfp\":\"1.859a48be2421ee521b643d488d028685c7045353c280e4d4f2033101cc61f5a4\",\"previousversion\":\"541\"}],\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.50030f0a9b7c60f41289dd11530f986633657560169c0a9154c989d091686fc3\"}]},\"version\""
		":\"543\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.26100.6584\"},\"prodversion\":\"120.0.6099.63\",\"protocol\":\"3.1\",\"requestid\":\"{609c8fa7-e7ee-46c8-8ae5-eb333de967be}\",\"sessionid\":\"{4b082d15-9263-427d-aaf6-addcee69b810}\",\""
		"updaterversion\":\"120.0.6099.63\"}}", 
		LAST);

	lr_think_time(5);

	web_custom_request("json_6", 
		"URL=http://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromium\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"cohort\":\"1:s7x:\",\"cohortname\":\"Auto\",\"enabled\":true,\"event\":[{\"download_time_ms\":4025,\"downloaded\":4795,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"3083\",\"previousversion\":\"3082\",\"total\":4795,\"url\":\"http://edgedl.me.gvt1.com/edgedl/diffgen-puffin/jflookgnkcckhobaglndicnbbgbonegd/"
		"944bdffd742fd4802e1a7ba01702d23701f014f7b68331a98d0996bbb269d0ac\"},{\"diffresult\":1,\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.78f1fe6e6efb3e273133cdcf220f11369efab035119b7b7721078ce509aa4935\",\"nextversion\":\"3083\",\"previousfp\":\"1.4eec7d35d2705071876509626b921cd650d807fe3154e0d9af52859901c9b67b\",\"previousversion\":\"3082\"}],\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.78f1fe6e6efb3e273133cdcf220f11369efab035119b7b7721078ce509aa4935\"}]},\""
		"version\":\"3083\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.26100.6584\"},\"prodversion\":\"120.0.6099.63\",\"protocol\":\"3.1\",\"requestid\":\"{3fff2055-efec-4608-8240-67b4a4fdc739}\",\"sessionid\":\"{4b082d15-9263-427d-aaf6-addcee69b810}\","
		"\"updaterversion\":\"120.0.6099.63\"}}", 
		LAST);

	lr_think_time(10);

	web_custom_request("json_7", 
		"URL=http://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromium\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"cohort\":\"1:18ql:\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"event\":[{\"download_time_ms\":4046,\"downloaded\":10520,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"1442\",\"previousversion\":\"1436\",\"total\":10520,\"url\":\"http://edgedl.me.gvt1.com/edgedl/diffgen-puffin/efniojlnjndmcbiieegkicadnoecjjef/"
		"d9eff1713317cfa1d4a95646e8467c2b52b49f3455071b0096dbab5d231b2da4\"},{\"diffresult\":1,\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.075b849fbd2d3537cecab0fb70e95e499552d875392cd6488cadafbfd796013f\",\"nextversion\":\"1442\",\"previousfp\":\"1.b3ab5b895e930c283154f15d6d175e34dbcb50012f21c1d1fc35052ad7ae6c25\",\"previousversion\":\"1436\"}],\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\"1.075b849fbd2d3537cecab0fb70e95e499552d875392cd6488cadafbfd796013f\"}]},\""
		"version\":\"1442\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.26100.6584\"},\"prodversion\":\"120.0.6099.63\",\"protocol\":\"3.1\",\"requestid\":\"{108e8caa-46eb-425d-a6d8-29aaec91aef3}\",\"sessionid\":\"{4b082d15-9263-427d-aaf6-addcee69b810}\","
		"\"updaterversion\":\"120.0.6099.63\"}}", 
		LAST);

	lr_think_time(14);

	web_custom_request("json_8", 
		"URL=http://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromium\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"cohort\":\"1:ut9/1a0f:\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"event\":[{\"download_time_ms\":4045,\"downloaded\":10771,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"2025.9.29.62\",\"previousversion\":\"2025.9.22.61\",\"total\":10771,\"url\":\"http://edgedl.me.gvt1.com/edgedl/diffgen-puffin/"
		"ggkkehgbnfjpeggfpleeakpidbkibbmn/de77aaa773b6738e85d7323e1a67f24188b499d95c2e1de02469ebcb98842144\"},{\"diffresult\":1,\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.c4ae1aed178641ca90a8fdc3edf11a5ff3fd25bcba49736af8245caa38b03bc8\",\"nextversion\":\"2025.9.29.62\",\"previousfp\":\"1.76d4e34aada5db55aa46a5afa7fcf67d5719574de473b2068b1b2be1b6c6b7a6\",\"previousversion\":\"2025.9.22.61\"}],\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.c4ae1aed178641ca90a8fdc3edf11a5ff3fd25bcba49736af8245caa38b03bc8\"}]},\"version\":\"2025.9.29.62\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.26100.6584\"},\"prodversion\":\"120.0.6099.63\",\"protocol\":\"3.1\",\"requestid\":\""
		"{03b27655-bf3c-456e-9d31-d1ae3442c2c8}\",\"sessionid\":\"{4b082d15-9263-427d-aaf6-addcee69b810}\",\"updaterversion\":\"120.0.6099.63\"}}", 
		LAST);

	lr_think_time(5);

	web_custom_request("json_9", 
		"URL=http://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromium\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"cohort\":\"1:26yf:\",\"cohortname\":\"Stable\",\"enabled\":true,\"event\":[{\"download_time_ms\":4041,\"downloaded\":1940,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"2025.9.28.1\",\"previousversion\":\"2025.9.21.1\",\"total\":1940,\"url\":\"http://edgedl.me.gvt1.com/edgedl/diffgen-puffin/"
		"jflhchccmppkfebkiaminageehmchikm/e5253f9a6fddfdeb5c1b8ad69ea6aea2e7a9ca808c57231ad5d3b7f8ae67a540\"},{\"diffresult\":1,\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.51de3d8f7bc17c693027111b511a7f40ea89ec35f264c073b7f088fcb6fdacfa\",\"nextversion\":\"2025.9.28.1\",\"previousfp\":\"1.7bf9ca25468c499b265c8d3c98300141fbd562e7f32b54b583a2706802117887\",\"previousversion\":\"2025.9.21.1\"}],\"installdate\":6828,\"lang\":\"en-US\",\"packages\":{\"package\":[{\"fp\":\""
		"1.51de3d8f7bc17c693027111b511a7f40ea89ec35f264c073b7f088fcb6fdacfa\"}]},\"version\":\"2025.9.28.1\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":true,\"physmemory\":16,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.26100.6584\"},\"prodversion\":\"120.0.6099.63\",\"protocol\":\"3.1\",\"requestid\":\""
		"{7a5bfb32-420f-41e8-8873-babbe8d33844}\",\"sessionid\":\"{4b082d15-9263-427d-aaf6-addcee69b810}\",\"updaterversion\":\"120.0.6099.63\"}}", 
		LAST);

	return 0;
}