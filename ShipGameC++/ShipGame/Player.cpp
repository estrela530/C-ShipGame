#include <DxLib.h>
#include "Player.h"
#include "GraphFactory.h"

//	初期化処理
void Player::Start()
{
	_grp = GraphFactory::Instance().LoadGraph("img\\red.png");
	_size = Vector2D(64, 64);
	_radius = 16;
	_position = Vector2D(500, 500);
	_velocity = Vector2D(0, 0);
	_rotate = 0;
	_speed = 2;
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

//	更新
void Player::Update()
{
	//	キー入力を更新
	int key = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	//static int inputFrame = 0;
	//	移動量をクリア	
	_velocity = Vector2D(0, 0);

	// 上キーで前に進む
	/*if (key & PAD_INPUT_UP) {
		_velocity.y -= 2;
	}*/

	//	下キーで後ろに進む
	/*if (key & PAD_INPUT_DOWN) {
		_velocity.y += 2;
	}*/

	//	右キーで右に移動
	if (key & PAD_INPUT_RIGHT)
	{
		//_velocity.x += 2;
		_rotate += 0.01;
	}

	//	左キーで右に移動
	if (key & PAD_INPUT_LEFT)
	{
		//_velocity.x -= 2;
		_rotate -= 0.01;
	}

	//キーボードのスペースキーが押されたら
	if (CheckHitKey(KEY_INPUT_SPACE))
	{
		_velocity.y -= _speed;

		if (key & PAD_INPUT_RIGHT)
		{
			_velocity.x += 2;
			_velocity.y -= _speed / 1.5;
			_rotate += 0.01;
		}
	}
	_position += _velocity;
}

//	解放
void Player::Release()
{
}




