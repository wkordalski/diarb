#ifndef __DIARB_ENGINE_SIZE_HPP_93D6D749
#define __DIARB_ENGINE_SIZE_HPP_93D6D749

namespace diarb
{
	template<typename T>
  class size
  {
	public:
		T width, height;
		size(T w, T h) : width(w), height(h) {}
  };
}

#endif
 
