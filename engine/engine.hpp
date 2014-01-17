#ifndef __DIARB_ENGINE_ENGINE_HPP_000A088C
#define __DIARB_ENGINE_ENGINE_HPP_000A088C

#include "size.hpp"

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

namespace diarb
{
  class engine
  {
    sf::RenderWindow *wnd;
  public:
    engine();
    ~engine();
    
    void run();
    int version() {return 0;}
    
    
    size<int> screen_size = size<int>(1440,900);
    
    friend class renderer;
  };
}


#endif