#include "Block.h"

// BLock constructor that assigns data to the variables when declaring a new block
Block::Block(int ind, std::string dat, std::string previousBlockHashProvided)
{
	index = ind;
	data = dat;
	previousBlockHash = previousBlockHashProvided;
	blockHash = generateBlockHash(data, previousBlockHash); 		// no proof of work is implemented in this version yet
}

std::string Block::generateBlockHash(std::string dat, std::string pHash) {
	return sha256(dat + pHash + std::to_string(getUnixTimestamp()));	// Credits for the sha256 function is in the readme file
}

// returning the data stored in the private variables.
// This way, once the variable is set in the constructor, the user has access to only reading it and not modifying it. 
std::string Block::getBlockHash()
{
	return std::string();		
}

// returns previous block hash based on provided data
std::string Block::getPreviousHash()
{
	return std::string();
}

// get the data stored in the block
std::string Block::getData()
{
	return std::string();
}

// unix time stamp for the time of creation of the block
std::time_t Block::getUnixTimestamp()
{
	return std::time_t();
}
