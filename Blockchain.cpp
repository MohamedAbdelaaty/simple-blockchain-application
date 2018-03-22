#include "Blockchain.h"

Blockchain::Blockchain() {
	generateGenesisBlock();			// the beginning of any blockchain requires a genesis block which is generated in the constructor as a start poing for the chain
}

void Blockchain::addBlock(Block blockToAdd)
{
	chain.push_back(blockToAdd);		// function to add block to the chain, missing a proof of work algorithm which will be implemented over time

	return;
}

void Blockchain::generateGenesisBlock() {
	Block genesisBlock(0, "genesis data", "000");	// generating the genesis block using initialization data
							// index = 0
							// Data = "genesis data"
							// Previous block hash = "000"
	addBlock(genesisBlock);				// adds block to chain
}

