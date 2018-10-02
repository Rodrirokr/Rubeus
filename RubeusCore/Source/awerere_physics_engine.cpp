#include <awerere_physics_engine.h>

namespace Rubeus
{
	namespace Awerere
	{
		void APhysicsEngine::calculateCollisions()
		{
			m_CollisionEngine.executePhaseOne(m_GameObjects);
			m_CollisionEngine.executePhaseTwo();
		}

		void APhysicsEngine::decodeCollisionResponse()
		{
		}

		APhysicsEngine::APhysicsEngine(std::vector<RGameObject *> * gameObjects, const int & gridHeight, const int & gridWidth, const int & cellHeight, const int & cellWidth)
			:
			m_CollisionEngine(gameObjects, gridHeight, gridWidth, cellHeight, cellWidth)
		{
			m_CollisionEngine.m_GameObjects = gameObjects;
			m_GameObjects = gameObjects;
		}

		APhysicsEngine::~APhysicsEngine()
		{
		}

		void APhysicsEngine::setGameObjectArray(std::vector<RGameObject *> * gameObjects)
		{
			m_GameObjects = gameObjects;
		}

		void APhysicsEngine::update(const float deltaTime)
		{

		}
	}
}
