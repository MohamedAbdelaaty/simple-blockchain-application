#pragma once
#include "Dependencies.h"

class Block {
public:
	Block(int index, std::string data, std::string previousBlockHash);
	std::string getBlockHash();
	std::string getPreviousHash();
	std::string getData();
	std::time_t getUnixTimestamp();
private:
	int index;
	std::string data;
	std::string blockHash;
	std::string previousBlockHash;
	std::time_t unixTimestamp = std::time(nullptr);
	
	std::string generateBlockHash(std::string, std::string);
};