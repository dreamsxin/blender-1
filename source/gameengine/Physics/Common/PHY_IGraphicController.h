/*
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * The Original Code is Copyright (C) 2001-2002 by NaN Holding BV.
 * All rights reserved.
 */

/** \file PHY_IGraphicController.h
 *  \ingroup phys
 */

#ifndef __PHY_IGRAPHICCONTROLLER_H__
#define __PHY_IGRAPHICCONTROLLER_H__

#include "PHY_IController.h"

class PHY_IMotionState;

/**
 * PHY_IPhysicsController is the abstract simplified Interface to a physical object.
 * It contains the IMotionState and IDeformableMesh Interfaces.
 */
class PHY_IGraphicController : public PHY_IController
{
public:
	/**
	 * SynchronizeMotionStates ynchronizes dynas, kinematic and deformable entities (and do 'late binding')
	 */
	virtual bool SetGraphicTransform() = 0;
	virtual void Activate(bool active = true) = 0;
	virtual void SetLocalAabb(const mt::vec3& aabbMin, const mt::vec3& aabbMax) = 0;

	virtual PHY_IGraphicController *GetReplica(PHY_IMotionState *motionstate)
	{
		return nullptr;
	}
};

#endif  /* __PHY_IGRAPHICCONTROLLER_H__ */
