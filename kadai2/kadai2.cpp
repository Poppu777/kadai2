#include <iostream>
#include <random>
#include "Character.h"
#include"Turn.h"

int max_val = 100;
int min_val = 50;
int get_rand(int min_val, int max_val) {
	return (int((get_rand() % (max_val + 1 - min_val)) + min_val);
}

int main()
{
	{
		Character Player;
		Player.name_ = "プレイヤー";
		Player.HP_ = get_rand;
	}

	{
		Character Slime;
		Slime.name_ = "スライム";
		Slime.HP_ = get_rand;
	}

	{
		Character Goblin;
		Goblin.name_	= "ゴブリン";
		Goblin.HP_		=  get_rand;
	}


	{
		Character* pPlayer = new Character;
		pPlayer->neme_	= "プレイヤー";
		pPlayer->HP_	= get_rand;
	}

	{
		Character* pSlime = new Character;
		pSlime->neme_	= "スライム";
		pSlime->HP_		= get_rand;
	}

	{
		Character* pGoblin = new Character;
		pGoblin->neme_	= "ゴブリン";
		pGoblin->HP_	= get_rand;
	}

	while (true)
	{
		scanf_s("\n");
	}

}

