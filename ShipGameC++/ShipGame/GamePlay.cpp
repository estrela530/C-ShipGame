#include "GamePlay.h"
#include "GraphFactory.h"

//	‰Šú‰»
void GamePlay::Initialize()
{
	//	ƒQ[ƒ€‰æ–Ê‚Ì”wŒi‰æ‘œ“Ç‚İ‚İ
	_gameImage = GraphFactory::Instance().LoadGraph("img\\backcolor.png");
	_player.Start();
	_port.Start();
}

//	XV
void GamePlay::Update()
{
	//	ƒQ[ƒ€‰æ–Ê‚ğ•\¦‚·‚é
	DrawGraph(0, 0, _gameImage, TRUE);

	_player.Update();
	_port.Update();

	_player.Render();
	_port.Render();
}

//	‰ğ•ú
void GamePlay::Release()
{
	GraphFactory::Instance().EraseGraph("img\\backcolor.png");
}
