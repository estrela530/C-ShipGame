#include "GamePlay.h"
#include "GraphFactory.h"

//	������
void GamePlay::Initialize()
{
	//	�Q�[����ʂ̔w�i�摜�ǂݍ���
	_gameImage = GraphFactory::Instance().LoadGraph("img\\Sea.png");
	_player.Start();
	_port.Start();
	_largeA.Start();
	_largeB.Start();
}

//	�X�V
void GamePlay::Update()
{
	//	�Q�[����ʂ�\������
	DrawGraph(0, 0, _gameImage, TRUE);

	//�X�V
	_player.Update();
	_port.Update();
	_largeA.Update();
	_largeB.Update();

	//�`��
	_player.Render();
	_port.Render();
	_largeA.Render();
	_largeB.Render();
}

//	���
void GamePlay::Release()
{
	GraphFactory::Instance().EraseGraph("img\\Sea.png");
}
