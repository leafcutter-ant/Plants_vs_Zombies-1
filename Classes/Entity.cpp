#include"Entity.h"
#include "Global.h"
Entity::Entity() {

}
Entity::Entity(Point position, double rotate, double scale)
{
	_rotate = rotate;
	_scale = scale;
}
double Entity::getRotate() {
	return _rotate;
}
double Entity::getScale() {
	return _scale;
}
void Entity::setRotate(double rotate) {
	_rotate = rotate;
}
void Entity::setScale(double scale) {
	_scale = scale;
}