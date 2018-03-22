#include "Block.h"

Block::Block(int ind, std::string dat, std::string previousBlockHashProvided)
{
	index = ind;
	data = dat;
	previousBlockHash = previousBlockHashProvided;
	blockHash = generateBlockHash(data, previousBlockHash);
}

std::string Block::generateBlockHash(std::string dat, std::string pHash) {
	return sha256(dat + pHash + std::to_string(getUnixTimestamp()));
}

std::string Block::getBlockHash()
{
	return std::string();
}

std::string Block::getPreviousHash()
{
	return std::string();
}

std::string Block::getData()
{
	return std::string();
}

std::time_t Block::getUnixTimestamp()
{
	return std::time_t();
}
