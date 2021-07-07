/**
  * @file <src/modules/AutoMoDeConditionMoving.cpp>
  */

 #include "AutoMoDeConditionSmartObjectMoving.h"

 namespace argos {

  /****************************************/
  /****************************************/

	AutoMoDeConditionSmartObjectMoving::AutoMoDeConditionSmartObjectMoving() {
		m_strLabel = "Moving";
	}

  /****************************************/
  /****************************************/

	AutoMoDeConditionSmartObjectMoving::~AutoMoDeConditionSmartObjectMoving() {}

  /****************************************/
  /****************************************/

	AutoMoDeConditionSmartObjectMoving::AutoMoDeConditionSmartObjectMoving(AutoMoDeConditionSmartObjectMoving* pc_condition) {
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

  void AutoMoDeConditionSmartObjectMoving::Init() {
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

	AutoMoDeConditionSmartObjectMoving* AutoMoDeConditionSmartObjectMoving::Clone() {
		return new AutoMoDeConditionSmartObjectMoving(this);
	}

  /****************************************/
  /****************************************/

	bool AutoMoDeConditionSmartObjectMoving::Verify() {
		Real vel = (m_pcRobotDAO->GetAccelerometerReading()).vel.getVelocity();  
    //vell += 0.003;
    std::cout << "VELOCITY: " << vel << std::endl;
    //vel = vell;
		if (vel >= m_fMovingThreshold) {
        //    std::cout << "THRESHOLD " << std::endl;
      //vell = 0.0;
      return true;
    }
    else {
      return false;
    }
	}

  /****************************************/
  /****************************************/

	void AutoMoDeConditionSmartObjectMoving::Reset() {
    Init();
  }

 }
