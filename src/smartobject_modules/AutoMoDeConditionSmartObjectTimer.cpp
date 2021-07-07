/**
  * @file <src/modules/AutoMoDeConditionMoving.cpp>
  */

 #include "AutoMoDeConditionSmartObjectTimer.h"

 namespace argos {

  /****************************************/
  /****************************************/

	AutoMoDeConditionSmartObjectTimer::AutoMoDeConditionSmartObjectTimer() {
		m_strLabel = "Timer";
	}

  /****************************************/
  /****************************************/

	AutoMoDeConditionSmartObjectTimer::~AutoMoDeConditionSmartObjectTimer() {}

  /****************************************/
  /****************************************/

	AutoMoDeConditionSmartObjectTimer::AutoMoDeConditionSmartObjectTimer(AutoMoDeConditionSmartObjectTimer* pc_condition) {
		m_strLabel = pc_condition->GetLabel();
		m_unIndex = pc_condition->GetIndex();
		m_unIdentifier = pc_condition->GetIndex();
		m_unFromBehaviourIndex = pc_condition->GetOrigin();
		m_unToBehaviourIndex = pc_condition->GetExtremity();
		m_mapParameters = pc_condition->GetParameters();
    Init();
	}

  /****************************************/
  /****************************************/

  void AutoMoDeConditionSmartObjectTimer::Init() {
    m_fMovingThreshold = 0.02;
	  std::map<std::string, Real>::iterator it = m_mapParameters.find("t");
    if (it != m_mapParameters.end()) {
      m_uTimer = it->second;
      timer = m_uTimer;
    } else {
      LOGERR << "[FATAL] Missing parameter for the following condition:" << m_strLabel << std::endl;
      THROW_ARGOSEXCEPTION("Missing Parameter");
	  }
  }

  /****************************************/
  /****************************************/

	AutoMoDeConditionSmartObjectTimer* AutoMoDeConditionSmartObjectTimer::Clone() {
		return new AutoMoDeConditionSmartObjectTimer(this);
	}

  /****************************************/
  /****************************************/

	bool AutoMoDeConditionSmartObjectTimer::Verify() {
		if (timer <= 0) {
      timer = m_uTimer;
      return true;
    } else {
      timer--;
      return false;
    }
	}

  /****************************************/
  /****************************************/

	void AutoMoDeConditionSmartObjectTimer::Reset() {
    Init();
  }

 }
