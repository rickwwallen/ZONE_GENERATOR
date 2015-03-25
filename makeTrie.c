#include "triez.c"
#include "triez.h"

void load_zone()
{
	char domNme[DNM_SZ];
	uint32_t dTtl = 0; //default ttl gets redefined by SOA
	uint16_t dClass = 0; //default class gets redefined by SOA
	char rR2[LNE_SZ];
	Trie *root;

	root = createNode('*');

	domNme = ".";
	rR2 = "IN,SOA,SRI-NIC.ARPA,HOSTMASTER.SRI-NIC.ARPA,870611,1800,300,604800,86400,";
	addTrie(root, domNme, rR2, &dTtl, &dClass);

	domNme = ".";
	rR2 = "NS,A.ISI.EDU.,";
	addTrie(root, domNme, rR2, &dTtl, &dClass);

	domNme = ".";
	rR2 = "NS,C.ISI.EDU.,";
	addTrie(root, domNme, rR2, &dTtl, &dClass);

	domNme = ".";
	rR2 = "NS,SRI-NIC.ARPA.,";
	addTrie(root, domNme, rR2, &dTtl, &dClass);

	domNme = ".MIL";
	rR2 = "86400,CH,NS,SRI-NIC.ARPA.,";
	addTrie(root, domNme, rR2, &dTtl, &dClass);

	domNme = ".MIL";
	rR2 = "86400,NS,A.ISI.EDU.,";
	addTrie(root, domNme, rR2, &dTtl, &dClass);

	domNme = ".EDU";
	rR2 = "CH,NS,SRI-NIC.ARPA.,";
	addTrie(root, domNme, rR2, &dTtl, &dClass);

	domNme = ".EDU";
	rR2 = "86400,NS,C.ISI.EDU.,";
	addTrie(root, domNme, rR2, &dTtl, &dClass);

	domNme = ".ARPA.SRI-NIC";
	rR2 = "CH,A,26.0.0.73,";
	addTrie(root, domNme, rR2, &dTtl, &dClass);

	domNme = ".ARPA.SRI-NIC";
	rR2 = "A,10.0.0.51,";
	addTrie(root, domNme, rR2, &dTtl, &dClass);

	domNme = ".ARPA.SRI-NIC";
	rR2 = "MX,0,SRI-NIC.ARPA.,";
	addTrie(root, domNme, rR2, &dTtl, &dClass);

	domNme = ".ARPA.SRI-NIC";
	rR2 = "HINFO,DEC-2060,TOPS20,";
	addTrie(root, domNme, rR2, &dTtl, &dClass);

	domNme = ".ARPA.ACC";
	rR2 = "A,26.6.0.65,";
	addTrie(root, domNme, rR2, &dTtl, &dClass);

	domNme = ".ARPA.ACC";
	rR2 = "HINFO,PDP-11/70,UNIX,";
	addTrie(root, domNme, rR2, &dTtl, &dClass);

	domNme = ".ARPA.ACC";
	rR2 = "MX,10,ACC.ARPA.,";
	addTrie(root, domNme, rR2, &dTtl, &dClass);

	domNme = ".ARPA.USC-ISIC";
	rR2 = "CNAME,C.ISI.EDU.,";
	addTrie(root, domNme, rR2, &dTtl, &dClass);

	domNme = ".MIL.ASDF";
	rR2 = "CNAME,ARMY.MIL.,";
	addTrie(root, domNme, rR2, &dTtl, &dClass);

	domNme = ".EDU.ISI.A";
	rR2 = "86400,A,26.3.0.103,";
	addTrie(root, domNme, rR2, &dTtl, &dClass);

	domNme = ".EDU.ISI.C";
	rR2 = "86400,A,10.0.0.52,";
	addTrie(root, domNme, rR2, &dTtl, &dClass);

	return;
}
