#include <DxLib.h>
#include "MiddleA.h"
#include "GraphFactory.h"

//	‰Šú‰»ˆ—
void MiddleA::Start()
{
	_grp = GraphFactory::Instance().LoadGraph("img\\minato.png");
	_size = Vector2D(600, 128);
	_position = Vector2D(500, 735);
}

//	•`‰æ
void MiddleA::Render()
{
	LoadGraphScreen(static_cast<int>(_position.x),
		static_cast<int>(_position.y),
		"img\\minato.png", FALSE);
}

//	XV
void MiddleA::Update()
{

}

//	‰ğ•ú
void MiddleA::Release()
{
}




