#pragma once
class WalletOfChrist
{
public:
	WalletOfChrist();
	~WalletOfChrist();
	int ChristCoinsBalance();
	void AddChristCoins(int amountAdding);
	void RemoveChristCoins(int amountRemoveing);
private:
	int ChristCoins = 0;
};

