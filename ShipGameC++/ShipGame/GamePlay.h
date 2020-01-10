#pragma once
#include"Scene.h"
#include"Player.h"


//ゲーム画面シーン
class GamePlay :public Scene
{
public:
	//初期化
	void Initialize();

	//更新
	void Update();

	//解放
	void Release();

private:
	//プレイヤー
	Player _player;

	//ゲームプレイの背景
	int _gameImage;

};