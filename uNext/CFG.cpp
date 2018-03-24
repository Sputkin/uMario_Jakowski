#include "CFG.h"

/* ******************************************** */

CCFG::CCFG(void) { }

CCFG::~CCFG(void) {
	delete oText;
	delete oMM;
	delete tSMBLOGO;
}

/* ******************************************** */

int CCFG::GAME_WIDTH  = 800;
int CCFG::GAME_HEIGHT = 448;

Text* CCFG::oText = new Text();
CIMG* CCFG::tSMBLOGO = new CIMG();

MenuManager* CCFG::oMM = new MenuManager();
Music* CCFG::oMusic = new Music();

bool CCFG::keySpace = false;

int CCFG::keyIDA = 0;
int CCFG::keyIDD = 0;
int CCFG::keyIDS = 0;
int CCFG::keyIDSpace = 0;
int CCFG::keyIDShift = 0;

bool CCFG::canMoveBackward = true;

/* ******************************************** */

Text* CCFG::getText() {
	return oText;
}

MenuManager* CCFG::getMM() {
	return oMM;
}

Music* CCFG::getMusic() {
	return oMusic;
}

CIMG* CCFG::getSMBLOGO() {
	return tSMBLOGO;
}

std::string CCFG::getKeyString(int keyID) {
	if(keyID >= 97 && keyID <= 122) {
		return std::string(1, '0' + (keyID - 32) - 48);
	}

	if(keyID >= 48 && keyID <= 57) {
		return std::string(1, '0' + (keyID - 32) - 48);
	}

	switch(keyID) {
		case SDL_SCANCODE_ESCAPE:
			return "ESCAPE";
		case SDL_SCANCODE_SPACE:
			return "SPACE";
		case SDL_SCANCODE_LSHIFT:
			return "LSHIFT";
		case SDL_SCANCODE_RSHIFT:
			return "RSHIFT";
		case SDL_SCANCODE_UP:
			return "UP";
		case SDL_SCANCODE_DOWN:
			return "DOWN";
		case SDL_SCANCODE_RIGHT:
			return "RIGHT";
		case SDL_SCANCODE_LEFT:
			return "LEFT";
		case SDL_SCANCODE_LCTRL:
			return "LCTRL";
		case SDL_SCANCODE_RCTRL:
			return "RCTRL";
	}

	return "NONE";
}
