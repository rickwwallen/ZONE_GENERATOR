/*
 * * FILE NAME:		generate_zone.c
 * * CODE THAT CALLS FUNCTION TO PARSE ZONE FILE INTO C CODE TO LOAD TRIE INTO MEMORY
 * * CREATED BY:	RICK W. WALLEN
 * * DATE CREATED:	MARCH.24.2015
 * * DATE LAST MOD:	MARCH.25.2015
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
 * *	March.24.2015-created altered to call readZone to generate C function
 * 			- to load Trie structure into memory
 * *	March.25.2015-altered comments
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
