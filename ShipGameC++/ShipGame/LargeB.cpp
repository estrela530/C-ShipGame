#include <DxLib.h>
#include "LargeB.h"
#include "GraphFactory.h"

//	初期化処理
void LargeB::Start()
{
	_grp = GraphFactory::Instance().LoadGraph("img\\fishB.png");
	_size = Vector2D(128, 128);
	_position = Vector2D(300, 735);
}

//	描画
void LargeB::Render()
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
void LargeB::Update()
{
	_position.x += 2;

}

//	解放
void LargeB::Release()
{
}




