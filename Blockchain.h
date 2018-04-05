/*

	Created by: Mohamed Abdelaaty
	
	Created On: March 17th
	
	Published On: March 21st
	
	Last updated: April 4th
	
	DISCLAIMER: this was made for educational, non-profit purposes only.

*/

#pragma once
#include <string>
#include <vector>
#include "Block.h"
#include <ctime>
#include "sha256.h"
#include <iostream>

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
