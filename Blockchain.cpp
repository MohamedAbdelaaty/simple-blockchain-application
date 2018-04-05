/*
	Created by: Mohamed Abdelaaty
	
	Created On: March 17th
	
	Published On: March 21st
	
	Last updated: April 4th
	
	DISCLAIMER: this was made for educational, non-profit purposes only.
*/

#include "Blockchain.h"

Blockchain::Blockchain() {
	generateGenesisBlock();				// the beginning of any blockchain requires a genesis block which is generated in the constructor as a start poing for the chain
}

int Blockchain::getNextChainIndex()
{
	return chain.size();
}

Block Blockchain::fetchLastBlock()
{
	Block lastBlock = chain.at(getNextChainIndex() - 1);
	return lastBlock;
}

void Blockchain::addBlock(Block blockToAdd)
{
	chain.push_back(blockToAdd);		// function to add block to the chain, missing a proof of work algorithm which will be implemented over time

	return;
}

Block Blockchain::fetchBlock(int i)
{
	return chain.at(i);
}

void Blockchain::generateGenesisBlock() {
	Block genesisBlock(0, "genesis data", "000");	// generating the genesis block using initialization data\
								// index = 0
								// Data = "genesis data"
								// Previous block hash = "000"
	addBlock(genesisBlock);				// adds block to chain
}

