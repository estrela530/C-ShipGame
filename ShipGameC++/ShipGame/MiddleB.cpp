#include <DxLib.h>
#include "MiddleB.h"
#include "GraphFactory.h"

//	初期化処理
void MiddleB::Start()
{
	_grp = GraphFactory::Instance().LoadGraph("img\\minato.png");
	_size = Vector2D(600, 128);
	_position = Vector2D(500, 735);
}

//	描画
void MiddleB::Render()
{
	LoadGraphScreen(static_cast<int>(_position.x),
		static_cast<int>(_position.y),
		"img\\minato.png", FALSE);
}

//	更新
void MiddleB::Update()
{

}

//	解放
void MiddleB::Release()
{
}




