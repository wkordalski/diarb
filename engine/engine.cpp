#include "engine.hpp"

#include <X11/Xlib.h>

namespace diarb
{
  engine::engine()
  {
    // For concurrent rendering...
    XInitThreads();
    
    // Init everything else
    // Create renderer
  }
  
  engine::~engine()
  {
  }
  
  void engine::run()
  {
    sf::ContextSettings settings;
    // TODO: fill-in the context
    this->wnd = new sf::RenderWindow(
        sf::VideoMode(this->screen_size.width, this->screen_size.height),
        "Diarb Game",
        sf::Style::Fullscreen /*,settings*/);
    this->wnd->setMouseCursorVisible(false);
    
    // When we want to start asyncronised renderer
    //this->rndr->run();
    
    bool running = true;
    while(running)
    {
      sf::Event event;
      while (this->wnd->pollEvent(event))
      {
        if (event.type == sf::Event::Closed)
        {
            // end the program
            running = false;
        }
        else if (event.type == sf::Event::Resized)
        {
            // adjust the viewport when the window is resized
            // How to do it in SFML?
            //glViewport(0, 0, event.size.width, event.size.height);
        }
        else if (event.type == sf::Event::KeyPressed)
        {
          if (event.key.code == sf::Keyboard::Escape)
          {
            // Do something when Escape is pressed...
            running = false;  // Stop running
          }
          // TODO
        }
      }
    }
    this->wnd->close();
    //this->rndr->join(); // Wait for renderer
    delete this->wnd;
  }
}