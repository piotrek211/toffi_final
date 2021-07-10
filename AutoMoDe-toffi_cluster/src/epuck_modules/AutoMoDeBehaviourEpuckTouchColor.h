/**
  * @file <src/modules/AutoMoDeBehaviourAttractionColor.h>
  *
  * @author Antoine Ligot - <aligot@ulb.ac.be>
  *
  * @package ARGoS3-AutoMoDe
  *
  * @license MIT License
  */

#ifndef AUTOMODE_BEHAVIOUR_EPUCK_TOUCH_COLOR_H
#define AUTOMODE_BEHAVIOUR_EPUCK_TOUCH_COLOR_H

#include "AutoMoDeBehaviourEpuck.h"

namespace argos {
    class AutoMoDeBehaviourEpuckTouchColor: public AutoMoDeBehaviourEpuck{
		public:
            AutoMoDeBehaviourEpuckTouchColor();
            AutoMoDeBehaviourEpuckTouchColor(AutoMoDeBehaviourEpuckTouchColor* pc_behaviour);
            virtual ~AutoMoDeBehaviourEpuckTouchColor();

			virtual void ControlStep();
			virtual void Reset();
			virtual void ResumeStep();
			virtual void Init();

            virtual AutoMoDeBehaviourEpuckTouchColor* Clone();

        private:
            Real m_fDistanceWeightParameter;
            CColor m_cColorEmiterParameter;
            CColor m_cColorReceiverParameter;
            Real m_unAttractionParameter;
	};
}

#endif
