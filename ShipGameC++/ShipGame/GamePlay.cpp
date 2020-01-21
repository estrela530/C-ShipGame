#include "GamePlay.h"
#include "GraphFactory.h"

//	初期化
void GamePlay::Initialize()
{
	//	ゲーム画面の背景画像読み込み
	_gameImage = GraphFactory::Instance().LoadGraph("img\\Sea.png");
	_player.Start();
	_port.Start();
	_largeA.Start();
	_largeB.Start();
}

//	更新
void GamePlay::Update()
{
	//	ゲーム画面を表示する
	DrawGraph(0, 0, _gameImage, TRUE);

	//更新
	_player.Update();
	_port.Update();
	_largeA.Update();
	_largeB.Update();

	//描画
	_player.Render();
	_port.Render();
	_largeA.Render();
	_largeB.Render();
}

//	解放
void GamePlay::Release()
{
	GraphFactory::Instance().EraseGraph("img\\Sea.png");
}
