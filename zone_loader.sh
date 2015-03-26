#!/bin/bash
# FILE NAME:		zone_loader.sh
# SHELL SCRIPT TO GENERATE C FILE FUNCTION 
# CREATED BY:		RICK W. WALLEN
# DATE CREATED:		MARCH.24.2015
# DATE LAST MOD:	MARCH.25.2015
#     ___________
#    |           | 
#  [[|___________|]] 
#    \___________/ 
#   __|[ ]||||[ ]|__
#   \_| # |||| # |_/
#  ___ ===Jeep=== ___ 
# |\/\| ''    '' |\/\|
# |/\/|          |/\/|
# |_\_|          |_\_|
#
#########################################################################
#
# MODIFIED LOG:
#       <date>-<description>
#	March.24.2015-create shell script to call zone generator and create C 
#		-file with C function to load Trie structure into memory
#	March.25.2015-added comments
#/
#########################################################################

./gen_zone > trie_loader.c
