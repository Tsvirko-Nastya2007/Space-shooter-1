#include "player.h"
#include "settings.h"

Player::Player() {
	texture.loadFromFile(IMAGES_FOLDER + PLAYER_FILE_NAME);
	sprite.setTexture(texture);
	sprite.setPosition(WINDOW_WIDTH/2 - sprite.getGlobalBounds().width/2,
		WINDOW_HEIGHT - sprite.getGlobalBounds().height -10);
}
void Player::update() {
	sf::Vector2f position = sprite.getPosition();
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)&&
		position.x>0)
		sprite.move(-5.1f, 0.f);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)&&
		position.x < WINDOW_WIDTH- sprite.getGlobalBounds().width)
		sprite.move(5.1f, 0.f);

}
void Player::draw(sf::RenderWindow& window) {window.draw(sprite);}