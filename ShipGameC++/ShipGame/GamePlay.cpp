#include "GamePlay.h"
#include "GraphFactory.h"

//	������
void GamePlay::Initialize()
{
	//	�Q�[����ʂ̔w�i�摜�ǂݍ���
	_gameImage = GraphFactory::Instance().LoadGraph("img\\backcolor.png");
	_player.Start();
}

//	�X�V
void GamePlay::Update()
{
	//	�Q�[����ʂ�\������
	DrawGraph(0, 0, _gameImage, FALSE);
}

//	���
void GamePlay::Release()
{
	GraphFactory::Instance().EraseGraph("img\\backcolor.png");
}
