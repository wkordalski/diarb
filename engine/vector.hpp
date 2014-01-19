#ifndef __DIARB_ENGINE_VECTOR_HPP_AE75F283
#define __DIARB_ENGINE_VECTOR_HPP_AE75F283

namespace diarb
{
  template<typename T, int N>
  class vector
  {
    T _v[N];
  public:
    vector();
    vector(std::initializer_list<T> v);
    
    // TODO: as much constexpr as we can do!
    // TODO: other operations
    // TODO: some static predefined vectors (like 0,0,0 or 1,1,1)
  };
}

#include "vector.ipp"

// TODO: Here include some specializations for vector type (e.g. using vector_size attribute in Clang - should be conditionally compiled

#endif
 
