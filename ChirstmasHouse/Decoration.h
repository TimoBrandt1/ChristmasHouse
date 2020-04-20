#pragma once
#include <string>
#include <list>
#include <vector>
#include "Quality.h"
#include "WalletOfChrist.h"
class Decoration
{
public:
	Decoration();
	~Decoration();
	void PurchaceDecorations();
	void CheckInputDecoration(int aNumber);
	void GetOwnedDecorations();
	void GetDecorations();
private:
	WalletOfChrist walletOfChrist;
	int priceOfDecoration;
	int decorationInput = 0;
	std::vector<std::string> decorations;
	std::list<std::string> boughtDecorations;
	//Quality* quality;
};

