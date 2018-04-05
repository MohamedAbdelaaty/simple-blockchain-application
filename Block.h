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
#include <ctime>
#include "sha256.h"
#include "Blockchain.h"
#include <iostream>

// class definition for the data Block
class Block {
public:
	Block(int index, std::string data, std::string previousBlockHash);	// Class constructor
	std::string getBlockHash();						// returns the block hash stored in the private variable
											// blockHash
	std::string getPreviousHash();						// returns the previous block hash stored in the private variable
	std::string getData();							// returns the data stored in the private variable\
	std::time_t getUnixTimestamp();						// returns the time stamp of block creation
private:
	int index;								// block index number
	std::string data;							// data stored inside a block
	std::string blockHash;							// block hash generated using sha256 encryption
	std::string previousBlockHash;						// previous block hash to maintain integrity of the chain
	std::time_t unixTimestamp = std::time(nullptr);				// unix time stamp representing the time the block was generated
	
	std::string generateBlockHash(std::string, std::string);		// Function to generate the block hash
};
