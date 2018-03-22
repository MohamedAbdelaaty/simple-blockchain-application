#include "Blockchain.h"

Blockchain::Blockchain() {
	generateGenesisBlock();
}

void Blockchain::addBlock(Block blockToAdd)
{
	chain.push_back(blockToAdd);

	return;
}

void Blockchain::generateGenesisBlock() {
	Block genesisBlock(0, "genesis data", "000");
	chain.push_back(genesisBlock);
}

