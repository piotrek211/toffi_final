/**
  * @file <src/modules/AutoMoDeConditionNeighborsCount.cpp>
  *
  * @author Antoine Ligot - <aligot@ulb.ac.be>
  *
  * @package ARGoS3-AutoMoDe
  *
  * @license MIT License
  */

 #include "AutoMoDeConditionEpuckNeighborsCount.h"

 namespace argos {

	/****************************************/
	/****************************************/

	AutoMoDeConditionEpuckNeighborsCount::AutoMoDeConditionEpuckNeighborsCount() {
		m_strLabel = "NeighborsCount";
	}

	/****************************************/
	/****************************************/

	AutoMoDeConditionEpuckNeighborsCount::~AutoMoDeConditionEpuckNeighborsCount() {}

	/****************************************/
	/****************************************/

	AutoMoDeConditionEpuckNeighborsCount::AutoMoDeConditionEpuckNeighborsCount(AutoMoDeConditionEpuckNeighborsCount* pc_condition) {
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

	AutoMoDeConditionEpuckNeighborsCount* AutoMoDeConditionEpuckNeighborsCount::Clone() {
		return new AutoMoDeConditionEpuckNeighborsCount(this);
	}

	/****************************************/
	/****************************************/

	bool AutoMoDeConditionEpuckNeighborsCount::Verify() {
		UInt32 unNumberNeighbors = m_pcRobotDAO->GetNumberNeighbors();
                Real fProbability = (1/(1 + exp(m_fParameterEta * ((int)m_unParameterXi - (int)unNumberNeighbors))));
		return EvaluateBernoulliProbability(fProbability);
	}

	/****************************************/
	/****************************************/

	void AutoMoDeConditionEpuckNeighborsCount::Reset() {

	}

	/****************************************/
	/****************************************/

	void AutoMoDeConditionEpuckNeighborsCount::Init() {
		std::map<std::string, Real>::iterator itEta = m_mapParameters.find("w");
		std::map<std::string, Real>::iterator itXi = m_mapParameters.find("p");
		if ((itEta != m_mapParameters.end()) && (itXi != m_mapParameters.end())) {
			m_fParameterEta = itEta->second;
			m_unParameterXi = itXi->second;
		} else {
			LOGERR << "[FATAL] Missing parameter for the following condition:" << m_strLabel << std::endl;
			THROW_ARGOSEXCEPTION("Missing Parameter");
		}
	}

 }
