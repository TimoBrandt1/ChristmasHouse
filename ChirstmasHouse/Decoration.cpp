#include "Decoration.h"

Decoration::Decoration() : decorations()
{
	priceOfDecoration = 30;
	//Fills the vector list with all of the avalible decorations
	decorations.push_back("Christmas Tree");
	decorations.push_back("Door Wreath");
	decorations.push_back("Santa Claus Sleight");
	decorations.push_back("Snowman");
	decorations.push_back("Christmas lights");
	decorations.push_back("Story Book");
	decorations.push_back("Antique train set");
	decorations.push_back("Fake Presents");
	decorations.push_back("Christmas Stockings");
	decorations.push_back("Mistletoe");
}

Decoration::~Decoration()
{
}

void Decoration::PurchaceDecorations()
{
	std::cout << "Choose wich decoration you want to buy: " << std::endl;
	GetDecorations();
	std::cin >> decorationInput;
	CheckInputDecoration(decorationInput);
	//Activate StartMenu() from ChristmasOmegaCore here
}

void Decoration::CheckInputDecoration(int aNumber)
{
	std::cout << "You bought an: " << decorations[aNumber - 1] << std::endl;
	boughtDecorations.push_back(decorations[aNumber - 1]);
	walletOfChrist.RemoveChristCoins(priceOfDecoration);
}

void Decoration::GetOwnedDecorations()
{
	std::cout << "You own these decorations: " << std::endl;
	for (auto c : boughtDecorations)
	{
		std::cout << c << std::endl;
	}
	//Activate StartMenu() from ChristmasOmegaCore here
}

void Decoration::GetDecorations()
{
	int i = 1;
	for (auto v : decorations)
	{
		std::cout << i << ": "<< v << std::endl;
		i++;
	}
}
