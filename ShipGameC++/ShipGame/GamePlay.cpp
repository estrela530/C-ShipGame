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
	position = 0;
}

//	更新
void GamePlay::Update()
{
	//	ゲーム画面を表示する
	DrawGraph(position, 0, _gameImage, FALSE);
	DrawGraph(position - 1980, 0, _gameImage, FALSE);
	if (position >= 1980)
	{
		position = 0;
	}

	//DrawExtendGraph(0, 0, 1980, 1280, _gameImage, FALSE);

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

	position += 10;
}

//	解放
void GamePlay::Release()
{
	GraphFactory::Instance().EraseGraph("img\\Sea.png");
}
