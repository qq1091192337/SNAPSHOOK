#pragma once

#define DELETE_MOD(name) delete name; name = nullptr

#include "../Gui/Gui.h"
#include "../Engine/Engine.h"
#include "../License/License.h"

#include "Aimbot/Aimbot.h"
#include "Backtrack\LagComp.h"
#include "ESP/Esp.h"
//#include "C:/Users/Arthur/Desktop/RESOLVE/INDIGO/Cheat/Knifebot/Knifebot.h"
#include "Knifebot/Knifebot.h"
#include "Misc/Misc.h"
#include "Skin/Skin.h"
#include "InventoryChanger/InventoryChanger.h"

class CGui;

class CAimbot;
class CEsp;

class CSkin;
class CMisc;
class CInventoryChanger;
class CKnifebot;

namespace Engine
{
	class CRender;
	class CPlayers;
}

using namespace Engine;

namespace Client
{
//[swap_lines]
	extern int iScreenWidth;
	extern int iScreenHeight;

	extern string BaseDir;
	extern string LogFile;
	extern string GuiFile;
	extern string IniFile;

	extern Vector2D		g_vCenterScreen;

	extern CPlayers*	g_pPlayers;
	extern CRender*		g_pRender;
	extern CGui*		g_pGui;

	extern CAimbot*		g_pAimbot;
	extern CEsp*		g_pEsp;

	extern CSkin*		g_pSkin;
	extern CMisc*		g_pMisc;
	extern CKnifebot*   g_pKnifebot;

	extern bool			bC4Timer;
	//extern bool			rainbow;
	extern int			iC4Timer;

	extern int			iWeaponID;
	extern int			iWeaponSelectSkinIndex;
	extern int			iWeaponSelectIndex;

	bool Initialize( IDirect3DDevice9* pDevice );
	
	void Shutdown();
	void SendMMHello();
	void SendClientHello();

	void OnRender();
	void OnLostDevice();
	void OnResetDevice();
	void OnRetrieveMessage(void* ecx, void* edx, uint32_t *punMsgType, void *pubDest, uint32_t cubDest, uint32_t *pcubMsgSize);
	void OnSendMessage(void* ecx, void* edx, uint32_t unMsgType, const void* pubData, uint32_t cubData);
	void OnCreateMove( CUserCmd* pCmd );
	void OnFireEventClientSideThink( IGameEvent* pEvent );
	void OnFrameStageNotify( ClientFrameStage_t Stage );
	void OnDrawModelExecute( IMatRenderContext* ctx , const DrawModelState_t &state , const ModelRenderInfo_t &pInfo , matrix3x4_t *pCustomBoneToWorld = NULL );
	void OnPlaySound( const Vector* pOrigin , const char* pszSoundName );
	void OnPlaySound( const char* pszSoundName );
	void OnOverrideView( CViewSetup* pSetup );
	void OnGetViewModelFOV( float& fov );
	void DrawAimbot();
	void DrawTrigger();
	void DrawVisuals();
	void DrawSkins();
	void DrawMisc();
	void DrawColors();
	void DrawConfig();
	void OnRenderGUI();
//[/swap_lines]
}