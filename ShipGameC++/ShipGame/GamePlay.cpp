#include "GamePlay.h"
#include "GraphFactory.h"

//	������
void GamePlay::Initialize()
{
	//	�Q�[����ʂ̔w�i�摜�ǂݍ���
	_gameImage = GraphFactory::Instance().LoadGraph("img\\backcolor.png");
	_player.Start();
	_port.Start();
}

//	�X�V
void GamePlay::Update()
{
	//	�Q�[����ʂ�\������
	DrawGraph(0, 0, _gameImage, TRUE);

	_player.Update();
	_port.Update();

	_player.Render();
	_port.Render();
}

//	���
void GamePlay::Release()
{
	GraphFactory::Instance().EraseGraph("img\\backcolor.png");
}
