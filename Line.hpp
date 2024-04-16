#ifndef LINE_HPP
#define LINE_HPP
#include <SFML/Graphics.hpp>
class Line
{
public:
	sf::Vertex points[2];
	sf::Color color;

	Line() : color(sf::Color::White) {}

	Line(sf::Vector2f start, sf::Vector2f end) {
		points[0] = sf::Vertex(start);
		points[1] = sf::Vertex(end);
	}

	void setStart(sf::Vector2f start) {
		points[0] = sf::Vertex(start);
	}

	void setEnd(sf::Vector2f end) {
		points[1] = sf::Vertex(end);
	}

	void setColor(sf::Color newColor) {
		color = newColor;
		points[0].color = color;
		points[1].color = color;
	}

	void setPoint0Color(sf::Color newColor) {
		color = newColor;
		points[0].color = color;
	}

	void setPoint1Color(sf::Color newColor) {
		color = newColor;
		points[1].color = color;
	}

	void draw(sf::RenderWindow& window) {
		window.draw(points, 2, sf::Lines);
	}
};
#endif // end of #ifndef LINE_HPP
