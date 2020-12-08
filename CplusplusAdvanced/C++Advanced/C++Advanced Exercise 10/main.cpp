#include "pch.h"
#include "Block.h"
#include "Parent.h"
#include <iostream>

Block makeBlock(int size, std::string name) 
{
	std::cout << "begin makeBlock: " << std::endl;
	Block newBlock = Block(size, name);
	std::cout << "einde makeBlock: " << newBlock << std::endl;
	return newBlock;
}

Parent makeParent(std::string name)
{
	std::cout << "begin makeParent: " << std::endl;
	Parent newParent = Parent(name);
	std::cout << "einde makeParent: " << newParent << std::endl;
	return newParent;
}

int main() 
{
	std::cout << "------" << std::endl;

	Block block1(1024, "block1");
	std::cout << block1 << std::endl;

	std::cout << "------" << std::endl;

	std::cout << "voor makeBlock" << std::endl;
	Block block2 = makeBlock(2048, "block2");
	std::cout << "na makeBlock" << std::endl;
	std::cout << block2 << std::endl;

	std::cout << "------" << std::endl;

	Block block3(512, "block3");
	block3 = makeBlock(768, "block3");
	std::cout << block3 << std::endl;

	std::cout << "------" << std::endl;

	// gebruik de assignment-oper
	block3 = block2;
	std::cout << block3 << std::endl;

	std::cout << "------" << std::endl;

	std::cout << "voor makeParent" << std::endl;
	Parent parent = makeParent("parent");
	std::cout << "na makeParent" << std::endl;
	std::cout << parent << std::endl;

	return 0;
}