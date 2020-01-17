#include <DxLib.h>
#include "MiddleA.h"
#include "GraphFactory.h"

//	初期化処理
void MiddleA::Start()
{
	_grp = GraphFactory::Instance().LoadGraph("img\\minato.png");
	_size = Vector2D(600, 128);
	_position = Vector2D(500, 735);
}

//	描画
void MiddleA::Render()
{
	LoadGraphScreen(static_cast<int>(_position.x),
		static_cast<int>(_position.y),
		"img\\minato.png", FALSE);
}

//	更新
void MiddleA::Update()
{

}

//	解放
void MiddleA::Release()
{
}




