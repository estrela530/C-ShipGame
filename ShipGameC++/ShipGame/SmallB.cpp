#include <DxLib.h>
#include "SmallB.h"
#include "GraphFactory.h"

//	初期化処理
void SmallB::Start()
{
	_grp = GraphFactory::Instance().LoadGraph("img\\minato.png");
	_size = Vector2D(600, 128);
	_position = Vector2D(500, 735);
}

//	描画
void SmallB::Render()
{
	LoadGraphScreen(static_cast<int>(_position.x),
		static_cast<int>(_position.y),
		"img\\minato.png", FALSE);
}

//	更新
void SmallB::Update()
{

}

//	解放
void SmallB::Release()
{
}




