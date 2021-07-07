/**
  * @file <src/modules/AutoMoDeConditionMovingWhiteFloor.cpp>
  */

 #include "AutoMoDeConditionSmartObjectMovingWhiteFloor.h"

 namespace argos {

	/****************************************/
	/****************************************/

	AutoMoDeConditionSmartObjectMovingWhiteFloor::AutoMoDeConditionSmartObjectMovingWhiteFloor() {
		m_strLabel = "MovingWhiteFloor";
	}

	/****************************************/
	/****************************************/

	AutoMoDeConditionSmartObjectMovingWhiteFloor::~AutoMoDeConditionSmartObjectMovingWhiteFloor() {}

	/****************************************/
	/****************************************/

	bool AutoMoDeConditionSmartObjectMovingWhiteFloor::Verify() {
    Real vel = (m_pcRobotDAO->GetAccelerometerReading()).vel.getVelocity();
    if (m_pcRobotDAO->GetGroundReading() >= m_fGroundThreshold && vel >= m_fMovingThreshold) {
      return EvaluateBernoulliProbability(m_fProbability);
    }
    else {
      return false;
    }
	}

	/****************************************/
	/****************************************/

	AutoMoDeConditionSmartObjectMovingWhiteFloor::AutoMoDeConditionSmartObjectMovingWhiteFloor(AutoMoDeConditionSmartObjectMovingWhiteFloor* pc_condition) {
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

	AutoMoDeConditionSmartObjectMovingWhiteFloor* AutoMoDeConditionSmartObjectMovingWhiteFloor::Clone() {
		return new AutoMoDeConditionSmartObjectMovingWhiteFloor(this);
	}

	/****************************************/
	/****************************************/

	void AutoMoDeConditionSmartObjectMovingWhiteFloor::Init() {
		m_fGroundThreshold = 0.95;
        m_fMovingThreshold = 0.1;
		std::map<std::string, Real>::iterator it = m_mapParameters.find("p");
		if (it != m_mapParameters.end()) {
			m_fProbability = it->second;
		} else {
			LOGERR << "[FATAL] Missing parameter for the following condition:" << m_strLabel << std::endl;
			THROW_ARGOSEXCEPTION("Missing Parameter");
		}
	}

	/****************************************/
	/****************************************/

	void AutoMoDeConditionSmartObjectMovingWhiteFloor::Reset() {}

 }
