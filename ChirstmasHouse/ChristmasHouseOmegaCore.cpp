#include "ChristmasHouseOmegaCore.h"

ChristmasHouseOmegaCore::ChristmasHouseOmegaCore()
{
	StartMenu();
}

ChristmasHouseOmegaCore::~ChristmasHouseOmegaCore()
{
}

void ChristmasHouseOmegaCore::StartMenu()
{
	std::cout << "Acitons you can perform:" << std::endl;
	std::cout << "1: Check current decorations" << std::endl;
	std::cout << "2: Purchace decorations" << std::endl;
	std::cout << "3: Check Christ Coins ballance" << std::endl;
	std::cout << "4: Work for Christ Coins" << std::endl;
	SetInput();
}

void ChristmasHouseOmegaCore::SetInput()
{
	std::cin >> inputNmb;
	CheckInput(inputNmb);
	inputNmb = 0;
}

void ChristmasHouseOmegaCore::CheckInput(int aNumber)
{
	switch (aNumber)
	{
	case 1:
		decoration.GetOwnedDecorations();
		break;
	case 2:
		decoration.PurchaceDecorations();
		break;
	case 3:
		std::cout << "Your Christ Coin balance is: " << walletOfChrist.ChristCoinsBalance() << std::endl;
		std::cout << "" << std::endl;
		StartMenu();
		break;
	case 4:
		Work();
		break;
	default:
		std::cout << "" << std::endl;
		std::cout << "!WRONG INPUT!" << std::endl;
		std::cout << "DEFAULTED TO START MENU" << std::endl;
		std::cout << "" << std::endl;
		StartMenu();
		break;
	}
}




