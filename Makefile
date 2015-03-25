CC = gcc
CFLAGS = -Wall

all : rwwResolver rwwDNS gen_zone 

rwwResolver : resolve.c resolve.h dns_1.h
	$(CC) $(CFLAGS) resolve.c -o rwwResolver

rwwDNS : ricksDNS.c trie_loader.c triez.c triez.h structs.h sharedFunctions.c sharedFunctions.h dns_1.h
	$(CC) $(CFLAGS) ricksDNS.c -o rwwDNS

gen_zone : generate_zone.c triez.c triez.h structs.h dns_1.h
	$(CC) $(CFLAGS) generate_zone.c -o gen_zone

clean : 
	$(RM) rwwResolver rwwDNS gen_zone
