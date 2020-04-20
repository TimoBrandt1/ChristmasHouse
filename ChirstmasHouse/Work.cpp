#include "Work.h"
#include <iostream>

Work::Work()
{
	ChoreMenu();
}

Work::~Work()
{
}

void Work::ChoreMenu()
{
	std::cout << "" << std::endl;
	std::cout << "Choose Christmas Chore:" << std::endl;
	std::cout << "1: Shovel neighbors front yard" << std::endl;
	std::cout << "2: Sing with Christmas Carol Choir" << std::endl;
	std::cout << "3: Assist Santa with childrens wishes" << std::endl;
	std::cout << "4: Help an elderly person cross the street" << std::endl;
	std::cout << "" << std::endl;
	SetChoreInput();
}

void Work::SetChoreInput()
{
	std::cin >> inputChoreMenu;
	ChooseChore(inputChoreMenu);
	inputChoreMenu = 0;
}

void Work::ChooseChore(int aChoreNumber)
{
	switch (aChoreNumber)
	{
	case SHOVEL:
		std::cout << "Shoveled your neighbors front yard" << std::endl;
		AddChristCoinsToWallet(10);
		
		break;
	case SINGFORPEOPLE:
		std::cout << "Sang for people with christmas carol choir" << std::endl;
		AddChristCoinsToWallet(50);
		break;
	case HELPSANTA:
		std::cout << "Assisted Santa with children wishes" << std::endl;
		AddChristCoinsToWallet(100);
		break;
	case CROSSELDERLY:
		std::cout << "Helped an elderly person cross the street" << std::endl;
		AddChristCoinsToWallet(5);
		break;
	default:
		ChristmasHouseOmegaCore();
		break;
	}
}

void Work::AddChristCoinsToWallet(int amountOfCoins)
{
	walletOfChrist.AddChristCoins(amountOfCoins);
	std::cout << "Added " << amountOfCoins << " Christ Coins to your Wallet of Christ" << std::endl;
	std::cout << "" << std::endl;
	ChristmasHouseOmegaCore();
}
