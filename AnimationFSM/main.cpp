#include <iostream>
#include <SFML/Graphics.hpp>
#include <AnimatedSprite.h>
#include <Player.h>
#include <Input.h>
#include <Debug.h>

using namespace std;

int main()
{
	// Create the main window
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");

	// Load a sprite to display
	sf::Texture texture;
	if (!texture.loadFromFile("assets\\grid.png")) {
		DEBUG_MSG("Failed to load file");
		return EXIT_FAILURE;
	}

	bool idle = true;
	bool run = false;
	bool climb = false;
	bool prone = false;
	bool crouching = false;
	bool jumping = false;


	// Setup Players Default Animated Sprite
	AnimatedSprite animated_sprite(texture);
	animated_sprite.addFrame(sf::IntRect(3, 3, 84, 84));
	animated_sprite.addFrame(sf::IntRect(88, 3, 84, 84));
	animated_sprite.addFrame(sf::IntRect(173, 3, 84, 84));
	animated_sprite.addFrame(sf::IntRect(258, 3, 84, 84));
	animated_sprite.addFrame(sf::IntRect(343, 3, 84, 84));
	animated_sprite.addFrame(sf::IntRect(428, 3, 84, 84));

	AnimatedSprite animated_Run(texture);
	animated_Run.addFrame(sf::IntRect(3, 88, 84, 84));
	animated_Run.addFrame(sf::IntRect(88, 88, 84, 84));
	animated_Run.addFrame(sf::IntRect(173, 88, 84, 84));
	animated_Run.addFrame(sf::IntRect(258, 88, 84, 84));
	animated_Run.addFrame(sf::IntRect(343, 88, 84, 84));
	animated_Run.addFrame(sf::IntRect(428, 88, 84, 84));


	AnimatedSprite animated_Prone(texture);
	animated_Prone.addFrame(sf::IntRect(3, 173, 84, 84));
	animated_Prone.addFrame(sf::IntRect(88, 173, 84, 84));
	animated_Prone.addFrame(sf::IntRect(173, 173, 84, 84));
	animated_Prone.addFrame(sf::IntRect(258, 173, 84, 84));
	animated_Prone.addFrame(sf::IntRect(343, 173, 84, 84));
	animated_Prone.addFrame(sf::IntRect(428, 173, 84, 84));

	AnimatedSprite animated_Crounching(texture);
	animated_Crounching.addFrame(sf::IntRect(3, 258, 84, 84));
	animated_Crounching.addFrame(sf::IntRect(88, 258, 84, 84));
	animated_Crounching.addFrame(sf::IntRect(173, 258, 84, 84));
	animated_Crounching.addFrame(sf::IntRect(258, 258, 84, 84));
	animated_Crounching.addFrame(sf::IntRect(343, 258, 84, 84));
	animated_Crounching.addFrame(sf::IntRect(428, 258, 84, 84));

	AnimatedSprite animated_Jumping(texture);
	animated_Jumping.addFrame(sf::IntRect(3, 343, 84, 84));
	animated_Jumping.addFrame(sf::IntRect(88, 343, 84, 84));
	animated_Jumping.addFrame(sf::IntRect(173, 343, 84, 84));
	animated_Jumping.addFrame(sf::IntRect(258, 343, 84, 84));
	animated_Jumping.addFrame(sf::IntRect(343, 343, 84, 84));
	animated_Jumping.addFrame(sf::IntRect(428, 343, 84, 84));

	AnimatedSprite animated_Climbing (texture);
	animated_Climbing.addFrame(sf::IntRect(3, 428, 84, 84));
	animated_Climbing.addFrame(sf::IntRect(88, 428, 84, 84));
	animated_Climbing.addFrame(sf::IntRect(173, 428, 84, 84));
	animated_Climbing.addFrame(sf::IntRect(258, 428, 84, 84));
	animated_Climbing.addFrame(sf::IntRect(343, 428, 84, 84));
	animated_Climbing.addFrame(sf::IntRect(428, 428, 84, 84));
	

	//AnimatedSprite mainSprite(texture);

	//mainSprite = animated_Prone;

	// Setup the Player
	Player player(animated_sprite);
	Input input;
	
	// Start the game loop
	while (window.isOpen())
	{
		// Process events
		sf::Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				// Close window : exit
				window.close();
				break;
			case sf::Event::KeyPressed:
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
				{
					player.setSprite(animated_Climbing);
					climb = true;
					input.setCurrent(Input::Action::LEFT);
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
				{
					player.setSprite(animated_Run);
					run = true;
					input.setCurrent(Input::Action::RIGHT);
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
				{
					player.setSprite(animated_Jumping);
					jumping = true;
					input.setCurrent(Input::Action::UP);
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
				{
					player.setSprite(animated_Prone);
					prone = true;
					input.setCurrent(Input::Action::Down);
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::LControl))
				{
					player.setSprite(animated_Crounching);
					crouching = true;
					input.setCurrent(Input::Action::LCRTL);
				}
				break;
			default:
		/*		player.setSprite(animated_sprite);
				input.setCurrent(Input::Action::IDLE);*/
				break;
			}

		}

		


		// Handle input to Player
		player.handleInput(input);

		// Update the Player
		player.update();

		// Clear screen
		window.clear();

		// Draw the Players Current Animated Sprite
		window.draw(player.getAnimatedSprite());

		// Update the window
		window.display();
	}

	return EXIT_SUCCESS;
};