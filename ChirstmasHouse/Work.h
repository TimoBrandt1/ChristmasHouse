#pragma once
#include "WalletOfChrist.h"
#include "ChristmasHouseOmegaCore.h"
class Work
{
public:
	Work();
	~Work();
	void ChoreMenu();
	void SetChoreInput();
	void ChooseChore(int aChoreNumber);
	void AddChristCoinsToWallet(int amountOfCoins);
private:
	WalletOfChrist walletOfChrist;
	int inputChoreMenu;
	int chirstCoinsAmountForWork = 0;
	enum Chores
	{
		SHOVEL = 1,
		SINGFORPEOPLE = 2,
		HELPSANTA = 3,
		CROSSELDERLY = 4
	};
};

