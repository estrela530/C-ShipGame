#include "GamePlay.h"
#include "GraphFactory.h"

//	初期化
void GamePlay::Initialize()
{
	//	ゲーム画面の背景画像読み込み
	_gameImage = GraphFactory::Instance().LoadGraph("img\\backcolor.png");
}

//	更新
void GamePlay::Update()
{
	//	ゲーム画面を表示する
	DrawGraph(0, 0, _gameImage, FALSE);
}

//	解放
void GamePlay::Release()
{
	GraphFactory::Instance().EraseGraph("img\\backcolor.png");
}
