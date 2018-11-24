#ifndef _COLLIDER_H
#define _COLLIDER_H

#include "../Entities/Texture.h"

class Collider : public GameEntity
{
public:
	enum class ColliderType
	{
		Box,
		Circle
	};

protected:
	ColliderType mType;

	static const bool DEBUG_COLLIDERS = true;
	Texture* mDebugTexture;

public:
	Collider(ColliderType type);
	virtual ~Collider();

	virtual void Render();

protected:
	void SetDebugTexture(Texture* texture);
};

#endif
