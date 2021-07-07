/**
  * @file <src/modules/AutoMoDeBehaviourAttractionColor.cpp>
  *
  * @author Antoine Ligot - <aligot@ulb.ac.be>
  *
  * @package ARGoS3-AutoMoDe
  *
  * @license MIT License
  */

#include "AutoMoDeBehaviourEpuckPushExceptColor.h"


namespace argos {

	/****************************************/
	/****************************************/

    AutoMoDeBehaviourEpuckPushExceptColor::AutoMoDeBehaviourEpuckPushExceptColor() {
        m_strLabel = "PushColor";
	}

	/****************************************/
	/****************************************/

    AutoMoDeBehaviourEpuckPushExceptColor::AutoMoDeBehaviourEpuckPushExceptColor(AutoMoDeBehaviourEpuckPushExceptColor* pc_behaviour) {
		m_strLabel = pc_behaviour->GetLabel();
		m_bLocked = pc_behaviour->IsLocked();
		m_bOperational = pc_behaviour->IsOperational();
		m_unIndex = pc_behaviour->GetIndex();
		m_unIdentifier = pc_behaviour->GetIdentifier();
		m_mapParameters = pc_behaviour->GetParameters();
		Init();
	}

	/****************************************/
	/****************************************/

    AutoMoDeBehaviourEpuckPushExceptColor::~AutoMoDeBehaviourEpuckPushExceptColor() {}

	/****************************************/
	/****************************************/

    AutoMoDeBehaviourEpuckPushExceptColor* AutoMoDeBehaviourEpuckPushExceptColor::Clone() {
        return new AutoMoDeBehaviourEpuckPushExceptColor(this);   // todo: check without *
	}

	/****************************************/
	/****************************************/

    void AutoMoDeBehaviourEpuckPushExceptColor::ControlStep() {
        CCI_EPuckOmnidirectionalCameraSensor::SReadings sReadings = m_pcRobotDAO->GetCameraInput();
        CCI_EPuckOmnidirectionalCameraSensor::TBlobList::iterator it;
        CVector2 sColVectorSum(0,CRadians::ZERO);
        CVector2 sProxVectorSum(0,CRadians::ZERO);
		CVector2 sResultVector(0,CRadians::ZERO);

        for (it = sReadings.BlobList.begin(); it != sReadings.BlobList.end(); it++) {
            if (PossibleColor((*it)->Color, m_cColorReceiverParameter) && (*it)->Distance >= 6.0) {
                sColVectorSum += CVector2(1 / (((*it)->Distance)+1), (*it)->Angle);
            }
            // TODO Check sColVectorSum function
        }

        if(sColVectorSum.SquareLength() == 0){
            sProxVectorSum = CVector2(m_pcRobotDAO->GetProximityReading().Value, m_pcRobotDAO->GetProximityReading().Angle);
        }

        sResultVector = CVector2(m_unAttractionParameter, sColVectorSum.Angle().SignedNormalize()) - 6*sProxVectorSum;

		m_pcRobotDAO->SetWheelsVelocity(ComputeWheelsVelocityFromVector(sResultVector));
        m_pcRobotDAO->SetLEDsColor(m_cColorEmiterParameter);

		m_bLocked = false;
	}

    /****************************************/
	/****************************************/

    bool AutoMoDeBehaviourEpuckPushExceptColor::PossibleColor(CColor foundColor, CColor exceptColor) {
        if ((foundColor == CColor::RED || foundColor == CColor::GREEN || foundColor == CColor::BLUE)){
            currentColor = foundColor;
            return true;
        }
        return false;

    }

	/****************************************/
	/****************************************/

    void AutoMoDeBehaviourEpuckPushExceptColor::Init() {
        std::map<std::string, Real>::iterator it = m_mapParameters.find("vel");
		if (it != m_mapParameters.end()) {
			m_unAttractionParameter = it->second;
		} else {
			LOGERR << "[FATAL] Missing parameter for the following behaviour:" << m_strLabel << std::endl;
			THROW_ARGOSEXCEPTION("Missing Parameter");
		}
        it = m_mapParameters.find("clr");
        if (it != m_mapParameters.end()) {
            m_cColorReceiverParameter = GetColorParameter(it->second, false);
        } else {
            LOGERR << "[FATAL] Missing parameter for the following behaviour:" << m_strLabel << std::endl;
            THROW_ARGOSEXCEPTION("Missing Parameter");
        }
	}

	/****************************************/
	/****************************************/

    void AutoMoDeBehaviourEpuckPushExceptColor::Reset() {
		m_bOperational = false;
		ResumeStep();
	}

	/****************************************/
	/****************************************/

    void AutoMoDeBehaviourEpuckPushExceptColor::ResumeStep() {
		m_bOperational = true;
	}
}
