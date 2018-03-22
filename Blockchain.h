#pragma once
#include "Dependencies.h"

class Blockchain {
public:
	Blockchain();
	int getNextChainIndex();
	void addBlock(Block blockToAdd);
	Block fetchLastBlock();
	Block fetchBlock(int index);
private:
	void generateGenesisBlock();
	std::vector<Block> chain;
};