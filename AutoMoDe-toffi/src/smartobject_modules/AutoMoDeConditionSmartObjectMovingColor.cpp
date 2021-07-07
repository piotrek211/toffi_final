/**
  * @file <src/modules/AutoMoDeConditionMoving.cpp>
  */

 #include "AutoMoDeConditionSmartObjectMovingColor.h"

 namespace argos {

  /****************************************/
  /****************************************/

	AutoMoDeConditionSmartObjectMovingColor::AutoMoDeConditionSmartObjectMovingColor() {
		m_strLabel = "MovingColor";
	}

  /****************************************/
  /****************************************/

	AutoMoDeConditionSmartObjectMovingColor::~AutoMoDeConditionSmartObjectMovingColor() {}

  /****************************************/
  /****************************************/

	AutoMoDeConditionSmartObjectMovingColor::AutoMoDeConditionSmartObjectMovingColor(AutoMoDeConditionSmartObjectMovingColor* pc_condition) {
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

  void AutoMoDeConditionSmartObjectMovingColor::Init() {
    m_fMovingThreshold = 0.02;
	  std::map<std::string, Real>::iterator it = m_mapParameters.find("p");
   /* if (it != m_mapParameters.end()) {
      m_fProbability = it->second;
    } else {
      LOGERR << "[FATAL] Missing parameter for the following condition:" << m_strLabel << std::endl;
      THROW_ARGOSEXCEPTION("Missing Parameter");
	  }*/
    it = m_mapParameters.find("clr");
    if (it != m_mapParameters.end()) {
        m_cColorParameter = GetColorParameter(it->second);
    } else {
        LOGERR << "[FATAL] Missing parameter for the following condition:" << m_strLabel << std::endl;
        THROW_ARGOSEXCEPTION("Missing Parameter");
    }
  }

  /****************************************/
  /****************************************/

	AutoMoDeConditionSmartObjectMovingColor* AutoMoDeConditionSmartObjectMovingColor::Clone() {
		return new AutoMoDeConditionSmartObjectMovingColor(this);
	}

  /****************************************/
  /****************************************/

	bool AutoMoDeConditionSmartObjectMovingColor::Verify() {
		Real vel = (m_pcRobotDAO->GetAccelerometerReading()).vel.getVelocity();
    CColor color = m_pcRobotDAO->GetLEDsColor();
		if (vel >= m_fMovingThreshold && color == m_cColorParameter) {
      return true;
    }
    else {
      return false;
    }
	}

  /****************************************/
  /****************************************/

	void AutoMoDeConditionSmartObjectMovingColor::Reset() {
    Init();
  }

 }
