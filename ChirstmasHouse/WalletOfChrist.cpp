#include "WalletOfChrist.h"

WalletOfChrist::WalletOfChrist() : ChristCoins()
{
}

WalletOfChrist::~WalletOfChrist()
{
}

int WalletOfChrist::ChristCoinsBalance()
{
	return ChristCoins;
}

void WalletOfChrist::AddChristCoins(int amountAdding)
{
	ChristCoins += amountAdding;
}

void WalletOfChrist::RemoveChristCoins(int amountRemoveing)
{
	ChristCoins -= amountRemoveing;
}
