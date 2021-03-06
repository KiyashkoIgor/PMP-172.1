#include "Food.h"
#include "Game.h"

Food::Food()
{
	sign = '#';
	body = { rand() % 18 + 2, rand() % 18 + 2 };
}

void Food::reinit()
{
	body = { rand() % 18 + 2, rand() % 18 + 2 };
	for (Coordinate coordinate : Game::getInstance().snake.body) {
		if (body == coordinate)
		{
			reinit();
		}
	}
}

void Food::draw()
{
	body.draw(sign);
}


Food::~Food()
{
}
