#pragma once
#include "BMDSwitcherAPI_h.h"
#include "ofMain.h"

class MixEffectBlockMonitor;
class SwitcherMonitor;
class InputMonitor;

namespace ofxAtem2
{
	class Controller
	{
	public:
		friend class SwitcherMonitor;

		Controller() { init(); }
		~Controller() { disconnect();  }

		bool connect(string ip, int mix_effect_block_index = 0);
		void reconnect();
		void disconnect();
		void update();

		void performCut();
		void performAuto();
		void setProgramId(int id);
		void setPreviewId(int id);
		void setAutoRate(uint32_t frames);
		void setTransitionPosition(float pos);

		int getProgramId() const { return program; }
		int getPreviewId() const { return preview; }
		string getProductName() const { return product_name; }
		string getVideoModeString() const { return video_mode; }
		bool isInTransition() const;
		bool isConnected() const { return connectionStatus; }

		void setAutoReconnect(bool b) { b_autoreconnect = b; }
		bool isAutoReconnect() const { return b_autoreconnect; }

		int getAux(int index);
		void setAux(int index, int id);

	protected:
		void init();

		int connectionStatus = 0;
		int64_t program = -1;
		int64_t preview = -1;
		string product_name;
		string video_mode;
		string ip_;
		bool b_autoreconnect = false;
		bool b_reconnect = false;

		IBMDSwitcherDiscovery*		mSwitcherDiscovery;
		IBMDSwitcher*				mSwitcher;
		IBMDSwitcherMixEffectBlock*	mMixEffectBlock;

		SwitcherMonitor*			mSwitcherMonitor;
		std::vector<InputMonitor* >	mInputMonitors;
		std::vector<IBMDSwitcherInputAux*>	mSwitcherInputAuxList;
		std::vector<BMDSwitcherInputId*>	mInputIds;
		MixEffectBlockMonitor*		mMixEffectBlockMonitor;
		vector<int64_t> auxoutputs;
	};
}
