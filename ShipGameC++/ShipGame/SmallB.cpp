#include <DxLib.h>
#include "SmallB.h"
#include "GraphFactory.h"

//	‰Šú‰»ˆ—
void SmallB::Start()
{
	_grp = GraphFactory::Instance().LoadGraph("img\\minato.png");
	_size = Vector2D(600, 128);
	_position = Vector2D(500, 735);
}

//	•`‰æ
void SmallB::Render()
{
	LoadGraphScreen(static_cast<int>(_position.x),
		static_cast<int>(_position.y),
		"img\\minato.png", FALSE);
}

//	XV
void SmallB::Update()
{

}

//	‰ğ•ú
void SmallB::Release()
{
}




