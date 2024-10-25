#ifndef PROJECTILE_HPP__
#define PROJECTILE_HPP__
#include "Entity.hpp"

template <typename TDamage>

class Projectile {
public:
	float Speed;
	TDamage Damage;
	Vector2 Position;
	Vector2 Direction;
	float Width;
	float Height;

	Projectile(TDamage damage, Vector2 position, Vector2 direction, float speed, float width, float height)
		: Damage(damage), Position(position), Direction(direction), Speed(speed), Width(width), Height(height) {};

	virtual void Move(const Entity& entity) {
		Position = Position + Direction * Speed;
		if (CheckCollisions(entity)) {
			Impact();
		}
	}

	virtual void Impact() {
		std::cout << "Impact. Damage : " << Damage << std::endl;
	}

	bool CheckCollisions(const Entity& entity) {
		return (
			Position.X < entity.Position.X + entity.Width &&
			Position.X + Width > entity.Position.X &&
			Position.Y < entity.Position.Y + entity.Height &&
			Position.Y + Height > entity.Position.Y
			);
	}
};

//template<>  Erreur si activée. Je ne comprend pas pourquoi
class FireBall : public Projectile<float> { 
//Child de Projectile, pour éviter de réécrire les variables et fonctions communes
public:
	float AOERadius;

	FireBall(float damage, float aoeradius, Vector2 position, Vector2 direction, float speed, float width, float height)
		: Projectile(damage, position, direction, speed, width, height), AOERadius(aoeradius) {};

	void Move(const Entity& entity) override {
		if (!CheckCollisions(entity)) {
			Position = Position + Direction * Speed;
		}
		else
		{
			Impact();
		}
	}

	void Impact() override {
		std::cout << "Explosion impact. Damage : " << Damage << ". on a radius of : " << AOERadius << std::endl;
	}
};

#endif // !PROJECTILE_H__
