#pragma once
#include"Scene.h"
#include"Player.h"


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

	//�Q�[���v���C�̔w�i
	int _gameImage;

};