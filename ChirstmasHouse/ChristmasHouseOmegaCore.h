#pragma once
#include <string>
#include <iostream>
#include "Decoration.h"
#include "Work.h"

class ChristmasHouseOmegaCore
{
public:
	ChristmasHouseOmegaCore();
	~ChristmasHouseOmegaCore();
	void StartMenu();
	void SetInput();
	void CheckInput(int aNumber);
private:
	WalletOfChrist walletOfChrist;
	Decoration decoration;
	int inputNmb;
};

