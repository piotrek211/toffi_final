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
    m_fMovingThreshold = 0.006;

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
  //  Real preVelocity = m_pcRobotDAO->GetVelocity();
  //  Real currVelocity = (m_pcRobotDAO->GetAccelerometerReading()).vel.getVelocity();
    Real velocities[4];
    m_pcRobotDAO->GetVelocityReading(velocities);

    UInt8 m_eMovingState = m_pcRobotDAO->getMovingState();

    Real sum = 0.0f;
    bool b_containsZeros = false;
    for (int i=0; i<4; i++) {
        std::cout << "VELOCITY: " << velocities[i] << std::endl;
        sum+= velocities[i];
    }

    Real mean = sum/4.0f;

    bool isMoved = false;
    std::cout << "STATE: " << m_eMovingState << std::endl;
    std::cout << "IsMoved: " << isMoved << std::endl;
    switch (m_eMovingState) {
			case 0: {
            if (mean >= m_fMovingThreshold) {
               isMoved = true;
               m_pcRobotDAO->setMovingState(1);
            }
            break;
      }
      case 1: {
            std::cout << timer << std::endl;
            timer--;
            if (timer <= 0){
              timer = 20;
              if (mean < m_fMovingThreshold) {
                  m_pcRobotDAO->setMovingState(0);
              } else {
                  isMoved = true;
              }
            }
            break;
      }
    } 

     return isMoved;
   
   /* Real preVelocity = m_pcRobotDAO->GetVelocity();
    Real currVelocity = (m_pcRobotDAO->GetAccelerometerReading()).vel.getVelocity();
    bool isMoved = false;
    if (preVelocity <= m_fMovingThreshold) {
      m_eMovingState = TOUCHING;
    }
    else{
      m_eMovingState = PUSHING;
    }
    switch (m_eMovingState) {
			case TOUCHING: {
            timer = 20;
            if (currVelocity >= m_fMovingThreshold) {
                isMoved = true;
            }
            break;
      }
      case PUSHING: {
            timer--;
            if (timer <= 0){
              timer = 20;
              isMoved = true;
            }
            break;
      }
    }    

     return isMoved;*/
  }
 
  /****************************************/
  /****************************************/

	void AutoMoDeConditionSmartObjectMoving::Reset() {
    Init();
  }

 }
