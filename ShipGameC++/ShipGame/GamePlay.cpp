#include "GamePlay.h"
#include "GraphFactory.h"
#include "Window.h"

//	������
void GamePlay::Initialize()
{
	//�e�I�u�W�F�N�g��������
	_player.Start();
	
}

//	�X�V
void GamePlay::Update()
{
	//�X�V���������s
	_player.Update();
	
	//�`�揈�������s
	
	_player.Render();

#ifdef _DEBUG_
	
#endif // _DEBUG_


}

//	���
void GamePlay::Release()
{
}
