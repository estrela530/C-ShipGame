#include <DxLib.h>
#include "MiddleA.h"
#include "GraphFactory.h"

//	初期化処理
void MiddleA::Start()
{
	_grp = GraphFactory::Instance().LoadGraph("img\\fishB.png");
	_size = Vector2D(128, 128);
	_position = Vector2D(300, 735);
}

//	描画
void MiddleA::Render()
{
	if (_position.x < 500)
	{
		LoadGraphScreen(static_cast<int>(_position.x),
			static_cast<int>(_position.y),
			"img\\silhouette.png", TRUE);
	}
	else if (_position.x >= 500)
	{
		LoadGraphScreen(static_cast<int>(_position.x),
			static_cast<int>(_position.y),
			"img\\fishB.png", TRUE);
	}
}

//	更新
void MiddleA::Update()
{
	_position.x += 2;

}

//	解放
void MiddleA::Release()
{
}




