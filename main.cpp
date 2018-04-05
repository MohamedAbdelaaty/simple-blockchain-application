/*

	Created by: Mohamed Abdelaaty
	
	Created On: March 17th
	
	Published On: March 21st
	
	Last updated: April 4th
	
	DISCLAIMER: this was made for educational, non-profit purposes only.

*/
#include <string>
#include <vector>
#include "Block.h"
#include <ctime>
#include "sha256.h"
#include "Blockchain.h"
#include <iostream>

int main() {
	Blockchain ourBlockChain();

	/*
	*
	*	adding 5 blocks without proof of work
	*
	*/


	for (int i = 0; i < 5; i++) {
		std::string data = "This is block number " + (i + 1);
		Block blockToAdd(ourBlockChain().getNextChainIndex(), data, ourBlockChain().fetchLastBlock().getBlockHash());

	}
	
	for (int i = 0; i < ourBlockChain().getNextChainIndex(); i++)
	{
		std::cout << ourBlockChain().fetchBlock(i).getBlockHash() << std::endl;
	}
	return 0;
}
