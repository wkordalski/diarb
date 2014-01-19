#ifndef __DIARB_ENGINE_RENDERER_HPP_BFFE8AEA
#define __DIARB_ENGINE_RENDERER_HPP_BFFE8AEA

#include <thread>

#include <SFML/Window.hpp>

namespace diarb
{
	// Engine class declaration
	class engine;
	
	// Renderer class -> draws the world
  class renderer
  {
		engine *eng;
		std::thread *th;
  public:
		renderer(engine *e);
		void run();
		void join();
		void draw(int delay);
		
	private:
		void thread();
  };
}

#endif
 
