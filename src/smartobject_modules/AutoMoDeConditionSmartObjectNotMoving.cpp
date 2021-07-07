/**
  * @file <src/modules/AutoMoDeConditionMoving.cpp>
  */

 #include "AutoMoDeConditionSmartObjectNotMoving.h"

 namespace argos {

  /****************************************/
  /****************************************/

	AutoMoDeConditionSmartObjectNotMoving::AutoMoDeConditionSmartObjectNotMoving() {
		m_strLabel = "NotMoving";
	}

  /****************************************/
  /****************************************/

	AutoMoDeConditionSmartObjectNotMoving::~AutoMoDeConditionSmartObjectNotMoving() {}

  /****************************************/
  /****************************************/

	AutoMoDeConditionSmartObjectNotMoving::AutoMoDeConditionSmartObjectNotMoving(AutoMoDeConditionSmartObjectNotMoving* pc_condition) {
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

  void AutoMoDeConditionSmartObjectNotMoving::Init() {
    m_fMovingThreshold = 0.02;
	  /*std::map<std::string, Real>::iterator it = m_mapParameters.find("p");
    if (it != m_mapParameters.end()) {
      m_fProbability = it->second;
    } else {
      LOGERR << "[FATAL] Missing parameter for the following condition:" << m_strLabel << std::endl;
      THROW_ARGOSEXCEPTION("Missing Parameter");
	  }*/
  }

  /****************************************/
  /****************************************/

	AutoMoDeConditionSmartObjectNotMoving* AutoMoDeConditionSmartObjectNotMoving::Clone() {
		return new AutoMoDeConditionSmartObjectNotMoving(this);
	}

  /****************************************/
  /****************************************/

	bool AutoMoDeConditionSmartObjectNotMoving::Verify() {
		Real vel = (m_pcRobotDAO->GetAccelerometerReading()).vel.getVelocity();  
		if (vel < m_fMovingThreshold) {
      return true;
    }
    else {
      return false;
    }
	}

  /****************************************/
  /****************************************/

	void AutoMoDeConditionSmartObjectNotMoving::Reset() {
    Init();
  }

 }
