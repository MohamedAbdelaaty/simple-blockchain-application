#pragma once
#include "Dependencies.h"

class Blockchain {
public:
	Blockchain();

	void addBlock(Block);
private:
	void generateGenesisBlock();
	std::vector<Block> chain;
};