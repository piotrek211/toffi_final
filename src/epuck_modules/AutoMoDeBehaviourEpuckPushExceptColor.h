/**
  * @file <src/modules/AutoMoDeBehaviourAttractionColor.h>
  *
  * @author Antoine Ligot - <aligot@ulb.ac.be>
  *
  * @package ARGoS3-AutoMoDe
  *
  * @license MIT License
  */

#ifndef AUTOMODE_BEHAVIOUR_EPUCK_PUSH_EXCEPT_COLOR_H
#define AUTOMODE_BEHAVIOUR_EPUCK_PUSH_EXCEPT_COLOR_H

#include "AutoMoDeBehaviourEpuck.h"

namespace argos {
    class AutoMoDeBehaviourEpuckPushExceptColor: public AutoMoDeBehaviourEpuck{
		public:
            AutoMoDeBehaviourEpuckPushExceptColor();
            AutoMoDeBehaviourEpuckPushExceptColor(AutoMoDeBehaviourEpuckPushExceptColor* pc_behaviour);
            virtual ~AutoMoDeBehaviourEpuckPushExceptColor();

			virtual void ControlStep();
			virtual void Reset();
			virtual void ResumeStep();
			virtual void Init();

            virtual AutoMoDeBehaviourEpuckPushExceptColor* Clone();

        private:
            bool PossibleColor(CColor foundColor, CColor badColor);
            Real m_fDistanceWeightParameter;
            CColor m_cColorEmiterParameter;
            CColor m_cColorReceiverParameter;
            Real m_unAttractionParameter;
            UInt16 steps = 40;
            CColor currentColor = CColor::BLACK;
	};
}

#endif
