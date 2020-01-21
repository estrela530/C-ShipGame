#include <DxLib.h>
#include "Player.h"
#include "GraphFactory.h"
#include <cmath>

//	初期化処理
void Player::Start()
{
	_grp = GraphFactory::Instance().LoadGraph("img\\PlayerShip.png");
	_size = Vector2D(64, 64);
	_radius = 16;
	_position = Vector2D(500, 500);
	_velocity = Vector2D(0, 0);
	_rotate = 0;
	_speed = 2;
	_angle = Vector2D(0, 0);
	
}


//	更新
void Player::Update()
{
	//	キー入力を更新
	int key = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	//static int inputFrame = 0;
	VECTOR a;
	VECTOR speed1;
	// playerPos;
	_sin = sin(_rotate);
	_cos = cos(_rotate);
	//playerPos = VGet(playerPos.x, playerPos.y, 0);

	a.x = _velocity.x*_cos - _velocity.y * _sin;
	a.y = _velocity.x*_sin + _velocity.y * _cos;

	//	移動量をクリア	
	_velocity = Vector2D(0, 0);
	
	//	右キーで右に移動
	if (key & PAD_INPUT_RIGHT)
	{
		//_velocity.x += 2;
		_rotate += 0.01;
	}

	//	左キーで右に移動
	if (key & PAD_INPUT_LEFT)
	{
		_rotate -= 0.01;
	}

	//スペースキーが押されたら前進
	if (CheckHitKey(KEY_INPUT_SPACE))
	{
		//playerPos += speed1;
		if (key & PAD_INPUT_RIGHT)
		{
			_velocity.x += 2;
			
		}
		if (key & PAD_INPUT_LEFT)
		{
			_velocity.x -= 2;
		}
		_velocity.y -= 2;
	
	}
	 //playerPos = VAdd(playerPos,a);
	_position += _velocity;
}

//	解放
void Player::Release()
{
}


//	描画
void Player::Render()
{
	//	プレイヤーを描画
	/*DrawRectGraph(static_cast<int>(_position.x),
		static_cast<int>(_position.y), 0, 64,
		static_cast<int>(_size.x),
		static_cast<int>(_size.y), _grp, TRUE);*/

	/*LoadGraphScreen(static_cast<int>(_position.x),
		static_cast<int>(_position.y),
		"img\\red.png", FALSE);*/

	//途中
	/*DrawRotaGraph
	(
		static_cast<int>(playerPos.x),
		static_cast<int>(playerPos.y),
		1,
		_rotate,
		_grp,
		FALSE,
		FALSE
	);*/

	DrawRotaGraph
	(
		static_cast<int>(_position.x),
		static_cast<int>(_position.y),
		1,
		_rotate,
		_grp,
		FALSE,
		FALSE
	);
}


