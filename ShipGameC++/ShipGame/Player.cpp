#include <DxLib.h>
#include "Player.h"
#include "GraphFactory.h"

//	����������
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

//	�`��
void Player::Render()
{
	//	�v���C���[��`��
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

//	�X�V
void Player::Update()
{
	//	�L�[���͂��X�V
	int key = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	//static int inputFrame = 0;
	//	�ړ��ʂ��N���A	
	_velocity = Vector2D(0, 0);

	// ��L�[�őO�ɐi��
	/*if (key & PAD_INPUT_UP) {
		_velocity.y -= 2;
	}*/

	//	���L�[�Ō��ɐi��
	/*if (key & PAD_INPUT_DOWN) {
		_velocity.y += 2;
	}*/

	//	�E�L�[�ŉE�Ɉړ�
	if (key & PAD_INPUT_RIGHT)
	{
		//_velocity.x += 2;
		_rotate += 0.01;
	}

	//	���L�[�ŉE�Ɉړ�
	if (key & PAD_INPUT_LEFT)
	{
		//_velocity.x -= 2;
		_rotate -= 0.01;
	}

	//�L�[�{�[�h�̃X�y�[�X�L�[�������ꂽ��
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

//	���
void Player::Release()
{
}




