#pragma once
#include"Scene.h"
#include"Player.h"
#include "Port.h"


//�Q�[����ʃV�[��
class GamePlay :public Scene
{
public:
	//������
	void Initialize();

	//�X�V
	void Update();

	//���
	void Release();

private:
	//�v���C���[
	Player _player;

	//�`
	Port _port;

	//�Q�[���v���C�̔w�i
	int _gameImage;

};