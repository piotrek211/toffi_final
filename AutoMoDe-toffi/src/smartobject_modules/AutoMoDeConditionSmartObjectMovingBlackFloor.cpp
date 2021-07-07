/**
  * @file <src/modules/AutoMoDeConditionBlackFloor.cpp>
  *
  * @author Antoine Ligot - <aligot@ulb.ac.be>
  *
  * @package ARGoS3-AutoMoDe
  *
  * @license MIT License
  */

 #include "AutoMoDeConditionSmartObjectMovingBlackFloor.h"

 namespace argos {

  /****************************************/
  /****************************************/

	AutoMoDeConditionSmartObjectMovingBlackFloor::AutoMoDeConditionSmartObjectMovingBlackFloor() {
		m_strLabel = "MovingBlackFloor";
	}

  /****************************************/
  /****************************************/

	AutoMoDeConditionSmartObjectMovingBlackFloor::~AutoMoDeConditionSmartObjectMovingBlackFloor() {}

  /****************************************/
  /****************************************/

	AutoMoDeConditionSmartObjectMovingBlackFloor::AutoMoDeConditionSmartObjectMovingBlackFloor(AutoMoDeConditionSmartObjectMovingBlackFloor* pc_condition) {
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

  void AutoMoDeConditionSmartObjectMovingBlackFloor::Init() {
    m_fGroundThreshold = 0.1;
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

	AutoMoDeConditionSmartObjectMovingBlackFloor* AutoMoDeConditionSmartObjectMovingBlackFloor::Clone() {
		return new AutoMoDeConditionSmartObjectMovingBlackFloor(this);
	}

  /****************************************/
  /****************************************/

	bool AutoMoDeConditionSmartObjectMovingBlackFloor::Verify() {
    Real vel = (m_pcRobotDAO->GetAccelerometerReading()).vel.getVelocity();
	if (m_pcRobotDAO->GetGroundReading() <= m_fGroundThreshold && vel >= m_fMovingThreshold) {
      return EvaluateBernoulliProbability(m_fProbability);
    }
    else {
      return false;
    }
	}

  /****************************************/
  /****************************************/

	void AutoMoDeConditionSmartObjectMovingBlackFloor::Reset() {
    Init();
  }

 }
