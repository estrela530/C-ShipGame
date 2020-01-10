#pragma once
#include"Scene.h"

//タイトル画面シーン
class Title :public Scene
{
public:
	//初期化
	void Initialize();

	//更新
	void Updte();

	//解放
	void Release();

private:

	//タイトルの背景
	int _titleImage;
};