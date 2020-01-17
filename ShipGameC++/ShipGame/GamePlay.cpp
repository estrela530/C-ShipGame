#include "GamePlay.h"
#include "GraphFactory.h"

//	初期化
void GamePlay::Initialize()
{
	//	ゲーム画面の背景画像読み込み
	_gameImage = GraphFactory::Instance().LoadGraph("img\\backcolor.png");
	_player.Start();
	_port.Start();
}

//	更新
void GamePlay::Update()
{
	//	ゲーム画面を表示する
	DrawGraph(0, 0, _gameImage, TRUE);

	_player.Update();
	_port.Update();

	_player.Render();
	_port.Render();
}

//	解放
void GamePlay::Release()
{
	GraphFactory::Instance().EraseGraph("img\\backcolor.png");
}
