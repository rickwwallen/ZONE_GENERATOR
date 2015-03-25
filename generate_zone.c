/*
 * * FILE NAME:		ricksDNS.c
 * * DNS SERVER THE UTILIZES TRIE STRUCTURE AS THE LOOKUP DATABASE
 * * CREATED BY:	RICK W. WALLEN
 * * DATE CREATED:	JULY.4.2013
 * * DATE LAST MOD:	AUGUST.21.2013
 * *     ___________
 * *    |           | 
 * *  [[|___________|]] 
 * *    \___________/ 
 * *   __|[ ]||||[ ]|__
 * *   \_| # |||| # |_/
 * *  ___ ===Jeep=== ___ 
 * * |\/\| ''    '' |\/\|
 * * |/\/|          |/\/|
 * * |_\_|          |_\_|
 * */
/**********************************************************************/
/*
 * * MODIFIED LOG:
 * *       <date>-<description>
 * *	July.4.2013-created 
 * *		-use parseMsge.c for functions to handle queries
 * *	August.21.2013-many changes have not been logged but works as of now
 * *			-redid include statements
 * */
/**********************************************************************/
#include "structs.h"
#include "sharedFunctions.c"
#include "triez.c"
#include "dns_1.h"

/* MAIN F(X) */
int main(int argc, char* argv[])
{
	char *zfil		= "rootTest.txt";	// zone file

	readZone(zfil);
	return 0;
}
